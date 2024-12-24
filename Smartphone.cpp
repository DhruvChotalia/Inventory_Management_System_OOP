///////////////////////////////////////////////////////////////////////////
// File Name: Smartphone.cpp
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#include "Smartphone.h"
#include <sstream>
#include <iomanip>
#include <iostream>

// Constructor
Smartphone::Smartphone(std::string brand, std::string model, double basePrice, std::string serialNumber,
                       std::string operatingSystem, int storageCapacity, int batteryCapacity)
    : Product(brand, model, basePrice, serialNumber),
      operatingSystem(operatingSystem),
      storageCapacity(storageCapacity),
      batteryCapacity(batteryCapacity) {}

// Getter and setter methods for operating system
std::string Smartphone::getOperatingSystem() const
{
    return operatingSystem;
}

void Smartphone::setOperatingSystem(const std::string &operatingSystem)
{
    this->operatingSystem = operatingSystem;
}

// Getter and setter methods for storage capacity
int Smartphone::getStorageCapacity() const
{
    return storageCapacity;
}

void Smartphone::setStorageCapacity(int storageCapacity)
{
    this->storageCapacity = storageCapacity;
}

// Getter and setter methods for battery capacity
int Smartphone::getBatteryCapacity() const
{
    return batteryCapacity;
}

void Smartphone::setBatteryCapacity(int batteryCapacity)
{
    this->batteryCapacity = batteryCapacity;
}

// Method for calculating price
double Smartphone::calculatePrice() const
{
    return Product::getPrice() + (storageCapacity * 0.75) + (batteryCapacity * 0.05);
}

// Getter method for price
double Smartphone::getPrice() const
{
    return calculatePrice();
}

// Method for getting category
std::string Smartphone::getCategory() const
{
    return "Smartphone";
}

// Method for displaying details
void Smartphone::displayDetails() const
{
    std::cout << static_cast<std::string>(*this);
}

// Operator overloading for equality comparison
bool Smartphone::operator==(const Product &other) const
{
    // Check if the other object is of the same type as Smartphone
    if (typeid(other) == typeid(Smartphone))
    {
        // Convert the 'other' object to a Smartphone reference
        const Smartphone &otherSmartphone = static_cast<const Smartphone &>(other);
        // Perform comparison
        return (Product::operator==(other) &&
                operatingSystem == otherSmartphone.operatingSystem &&
                storageCapacity == otherSmartphone.storageCapacity &&
                batteryCapacity == otherSmartphone.batteryCapacity);
    }
    // If the other object is not a Smartphone, return false
    return false;
}

// Conversion operator to string
Smartphone::operator std::string() const
{
    std::stringstream result;
    result << "| " << std::setw(10) << std::left << getBrand() << " | "
           << std::setw(20) << std::left << getModel() << " | "
           << std::setw(8) << std::right << std::fixed << std::setprecision(2) << getPrice() << " | "
           << std::setw(10) << getSerialNumber() << " | "
           << std::setw(15) << operatingSystem << " | "
           << std::setw(10) << storageCapacity << "GB | "
           << std::setw(10) << batteryCapacity << "mAh|" << std::endl;
    return result.str();
}
