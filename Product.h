///////////////////////////////////////////////////////////////////////////
// File Name: Product.h
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

// Class representing a generic product
class Product
{
private:
    // Attributes
    std::string brand;        // Brand of the product
    std::string model;        // Model of the product
    double price;             // Price of the product
    std::string serialNumber; // Serial number of the product

public:
    // Constructor
    Product(std::string brand, std::string model, double price, std::string serialNumber);

    virtual ~Product() {}

    // Getter and setter methods for each attribute
    std::string getBrand() const;                          // Getter for brand
    void setBrand(const std::string &brand);               // Setter for brand
    std::string getModel() const;                          // Getter for model
    void setModel(const std::string &model);               // Setter for model
    virtual double getPrice() const;                       // Getter for price
    void setPrice(double price);                           // Setter for price
    std::string getSerialNumber() const;                   // Getter for serial number
    void setSerialNumber(const std::string &serialNumber); // Setter for serial number

    // Operator overloading
    virtual bool operator==(const Product &other) const; // Equality operator

    // Virtual functions to be implemented by derived classes
    virtual std::string getCategory() const = 0; // Get category of the product
    virtual void displayDetails() const = 0;     // Display details of the product
};

#endif // PRODUCT_H
