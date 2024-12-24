///////////////////////////////////////////////////////////////////////////
// File Name: Utilities.cpp
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#include "Utilities.h"
#include <sstream>

// Helper function to remove leading and trailing spaces from a string
std::string removeWhiteSpaces(const std::string &str)
{
    // Find the index of the first non-whitespace character
    size_t firstNonWhitespace = 0;
    while (firstNonWhitespace < str.length() && std::isspace(str[firstNonWhitespace]))
    {
        ++firstNonWhitespace;
    }

    // Find the index of the last non-whitespace character
    size_t lastNonWhitespace = str.length();
    while (lastNonWhitespace > 0 && std::isspace(str[lastNonWhitespace - 1]))
    {
        --lastNonWhitespace;
    }

    // Return the substring between the first and last non-whitespace characters
    return str.substr(firstNonWhitespace, lastNonWhitespace - firstNonWhitespace);
}

// Helper function to split a string by a delimiter
std::vector<std::string> splitStringByDelimiter(const std::string &str, char delimiter)
{
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    // Split the string using stringstream and store the tokens
    while (std::getline(ss, token, delimiter))
    {
        tokens.push_back(removeWhiteSpaces(token)); // Trim leading and trailing spaces from each token
    }
    return tokens;
}

// Function to create a Product object from the given data
Product *createProduct(const std::string &category, const std::string &data)
{
    // Parse the data string based on the category
    std::vector<std::string> parsedAttributes = splitStringByDelimiter(data, ',');
    if (category == "Laptop")
    {
        // Validate the number of attributes for a Laptop
        if (parsedAttributes.size() == 6)
        {
            try
            {
                // Extract attributes and create a new Laptop object
                std::string brand = parsedAttributes[0];
                std::string model = parsedAttributes[1];
                double basePrice = std::stod(parsedAttributes[2]);
                std::string serialNumber = parsedAttributes[3];
                std::string cpu = parsedAttributes[4];
                int ram = std::stoi(parsedAttributes[5]);
                return new Laptop(brand, model, basePrice, serialNumber, cpu, ram);
            }
            catch (...)
            {
                // Error handling for conversion errors
                return nullptr;
            }
        }
    }
    else if (category == "Smartphone")
    {
        // Validate the number of attributes for a Smartphone
        if (parsedAttributes.size() == 7)
        {
            try
            {
                // Extract attributes and create a new Smartphone object
                std::string brand = parsedAttributes[0];
                std::string model = parsedAttributes[1];
                double basePrice = std::stod(parsedAttributes[2]);
                std::string serialNumber = parsedAttributes[3];
                std::string operatingSystem = parsedAttributes[4];
                int storageCapacity = std::stoi(parsedAttributes[5]);
                int batteryCapacity = std::stoi(parsedAttributes[6]);
                return new Smartphone(brand, model, basePrice, serialNumber, operatingSystem, storageCapacity, batteryCapacity);
            }
            catch (...)
            {
                // Error handling for conversion errors
                return nullptr;
            }
        }
    }
    // If category is unknown or attributes are invalid, return nullptr
    return nullptr;
}
