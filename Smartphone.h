///////////////////////////////////////////////////////////////////////////
// File Name: Smartphone.h
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "Product.h" // Include necessary header file(s)
#include <string>

// Define the class for Smartphone, inheriting from Product
class Smartphone : public Product
{
private:
    std::string operatingSystem; // Operating system of the smartphone
    int storageCapacity;         // Storage capacity of the smartphone
    int batteryCapacity;         // Battery capacity of the smartphone

public:
    // Constructor with parameters
    Smartphone(std::string brand, std::string model, double basePrice, std::string serialNumber,
               std::string operatingSystem, int storageCapacity, int batteryCapacity);

    virtual ~Smartphone() {}

    // Getter and setter methods for operating system
    std::string getOperatingSystem() const;
    void setOperatingSystem(const std::string &operatingSystem);

    // Getter and setter methods for storage capacity
    int getStorageCapacity() const;
    void setStorageCapacity(int storageCapacity);

    // Getter and setter methods for battery capacity
    int getBatteryCapacity() const;
    void setBatteryCapacity(int batteryCapacity);

    // Method for calculating price
    double getPrice() const override;
    double calculatePrice() const;

    // Method for displaying details
    void displayDetails() const override;

    // Method for getting category
    std::string getCategory() const override;

    // Operator overloading for equality comparison
    bool operator==(const Product &other) const override;

    // Explicit conversion operator to string
    explicit operator std::string() const;
};

#endif // SMARTPHONE_H
