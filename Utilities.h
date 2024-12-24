///////////////////////////////////////////////////////////////////////////
// File Name: Utilities.h
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include "Inventory.h"
#include "Product.h"
#include "Laptop.h"
#include "Smartphone.h"
#include <vector>
#include <fstream>

// Function prototypes
std::string removeWhiteSpaces(const std::string &str); // Function to trim leading and trailing whitespace from a string

std::vector<std::string> splitStringByDelimiter(const std::string &str, char delimiter); // Function to split a string into substrings using a delimiter

Product *createProduct(const std::string &category, const std::string &data); // Function to create a Product object based on category and data

// Template function to process a file and populate an Inventory with products of type T
template <typename T>
void processFile(Inventory<T> &inventory, const std::string &filePath, const std::string &category)
{
    std::ifstream file(filePath); // Open the file for reading
    if (file.is_open())
    { // Check if the file is successfully opened
        std::string line;
        while (std::getline(file, line))
        {                                                     // Read each line from the file
            Product *product = createProduct(category, line); // Create a product from the line
            if (product != nullptr)
            {                                           // Check if product creation was successful
                inventory + (dynamic_cast<T>(product)); // Add the product to the inventory
            }
            else
            {
                std::cout << "Failed to create product from line: " << line << std::endl; // Print error message if product creation fails
            }
        }
        file.close(); // Close the file after processing
    }
    else
    {
        std::cout << "Unable to open file: " << filePath << std::endl; // Print error message if file opening fails
    }
}

#endif // UTILITIES_H
