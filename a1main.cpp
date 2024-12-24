// To test and run your code on the virtual machine using the command line, you can use the following steps.
// First, make sure you are in the correct directory, then compile the code using the following commands
// to compile and then run your code.
// To Compile: g++ -Wall -std=c++17 -g -o a1 Product.cpp Smartphone.cpp Laptop.cpp Utilities.cpp Inventory.h a1main.cpp
// To Run: ./a1
// After compiling and testing your code, run your program as following
// to check for possible memory leaks (assuming your executable name is a1):
// To check memory leaks: valgrind --leak-check=yes ./a1

///////////////////////////////////////////////////////////////////////////
// File Name: a1main.cpp
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#include <iostream>
#include <iomanip>
#include "Utilities.h"
#include "Product.h"
#include "Smartphone.h"
#include "Laptop.h"

int main()
{

    // Create an inventory to store the products
    Inventory<Product *> inventory;

    // Process Laptops and Smartphones data files
    processFile(inventory, "laptops_data.txt", "Laptop");
    processFile(inventory, "smartphones_data.txt", "Smartphone");

    // Display the inventory total value, the number of laptops and smartphones in the inventory
    std::cout << "-----------------------------------------\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total Inventory Value: $" << inventory.calculateTotalValue() << std::endl;
    std::cout << "Number of Laptops: " << inventory.countByCategory("Laptop") << std::endl;
    std::cout << "Number of Smartphones: " << inventory.countByCategory("Smartphone") << std::endl;
    std::cout << "-----------------------------------------\n";

    // Display the list of laptops and smartphones in the inventory
    std::cout << "-----------------------------------------\n";
    std::cout << "Laptops in the inventory:\n";
    std::cout << "-----------------------------------------\n";
    inventory.displayInventoryByCategory("Laptop");

    std::cout << "-----------------------------------------\n";
    std::cout << "Smartphones in the inventory:\n";
    std::cout << "-----------------------------------------\n";
    inventory.displayInventoryByCategory("Smartphone");
    std::cout << "-----------------------------------------\n";
    std::cout << "-----------------------------------------\n";

    // Create and add new laptop and smartphone
    Laptop *newLaptop = new Laptop("Dell", "XPS 15", 1500.00, "SN87654321", "Intel Core i7", 16);
    Smartphone *newSmartphone = new Smartphone("Samsung", "Galaxy S20", 999.99, "SN12345678", "Android", 128, 3000);
    inventory = inventory + newLaptop;
    inventory = inventory + newSmartphone;

    // Display updated inventory information
    std::cout << "Total Inventory Value: $" << inventory.calculateTotalValue() << std::endl;
    std::cout << "Number of Laptops: " << inventory.countByCategory("Laptop") << std::endl;
    std::cout << "Number of Smartphones: " << inventory.countByCategory("Smartphone") << std::endl;
    std::cout << "-----------------------------------------\n";
    std::cout << "-----------------------------------------\n";

    // Remove a laptop from inventory
    Laptop *laptopToRemove = new Laptop("Lenovo", "ThinkPad X1 Carbon", 1800.00, "SN200003", "Intel Core i7", 16);
    inventory = inventory - laptopToRemove;
    delete laptopToRemove;
    // Display updated inventory information after removal
    std::cout << "Total Inventory Value: $" << inventory.calculateTotalValue() << std::endl;
    std::cout << "Number of Laptops: " << inventory.countByCategory("Laptop") << std::endl;
    std::cout << "-----------------------------------------\n";
    std::cout << "Laptops in the inventory:\n";
    std::cout << "-----------------------------------------\n";

    inventory.displayInventoryByCategory("Laptop");
    std::cout << "-----------------------------------------\n";

    // Remove a smartphone from inventory
    Smartphone *smartphoneToRemove = new Smartphone("Google", "Pixel 5", 699.99, "SN112233", "Android", 128, 4080);
    inventory = inventory - smartphoneToRemove;
    delete smartphoneToRemove;
    // Display updated inventory information after removal
    std::cout << "Total Inventory Value: $" << inventory.calculateTotalValue() << std::endl;
    std::cout << "Number of Smartphones: " << inventory.countByCategory("Smartphone") << std::endl;
    std::cout << "-----------------------------------------\n";
    std::cout << "Smartphones in the inventory:\n";
    std::cout << "-----------------------------------------\n";
    inventory.displayInventoryByCategory("Smartphone");
    std::cout << "-----------------------------------------\n";

    return 0;
}
