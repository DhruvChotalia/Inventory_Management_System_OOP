///////////////////////////////////////////////////////////////////////////
// File Name: Product.cpp
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#include "Product.h"

// Constructor
Product::Product(std::string brand, std::string model, double price, std::string serialNumber)
    : brand(brand), model(model), price(price), serialNumber(serialNumber)
{
    // Initialize the attributes with the provided values
}

// Getter for brand
std::string Product::getBrand() const
{
    return brand;
}

// Setter for brand
void Product::setBrand(const std::string &brand)
{
    this->brand = brand;
}

// Getter for model
std::string Product::getModel() const
{
    return model;
}

// Setter for model
void Product::setModel(const std::string &model)
{
    this->model = model;
}

// Getter for price
double Product::getPrice() const
{
    return price;
}

// Setter for price
void Product::setPrice(double price)
{
    this->price = price;
}

// Getter for serial number
std::string Product::getSerialNumber() const
{
    return serialNumber;
}

// Setter for serial number
void Product::setSerialNumber(const std::string &serialNumber)
{
    this->serialNumber = serialNumber;
}

// Equality operator overloading
bool Product::operator==(const Product &other) const
{
    // Compare the brand, model, and serial number of two products
    return (brand == other.brand && model == other.model && serialNumber == other.serialNumber);
}
