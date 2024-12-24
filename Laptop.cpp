///////////////////////////////////////////////////////////////////////////
// File Name: Laptop.cpp
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#include "Laptop.h"
#include <iostream>
#include <sstream>
#include <iomanip>

// Constructor
Laptop::Laptop(std::string brand, std::string model, double basePrice, std::string serialNumber,
               std::string cpu, int ram)
    : Product(brand, model, basePrice, serialNumber), cpu(cpu), ram(ram) {}

// Getter and setter methods for CPU
std::string Laptop::getCpu() const
{
    return cpu;
}

void Laptop::setCpu(const std::string &cpu)
{
    this->cpu = cpu;
}

// Getter and setter methods for RAM
int Laptop::getRam() const
{
    return ram;
}

void Laptop::setRam(int ram)
{
    this->ram = ram;
}

// Method for calculating price
double Laptop::calculatePrice() const
{
    return Product::getPrice() + (ram * 20);
}
double Laptop::getPrice() const
{
    return calculatePrice();
}

// Method for getting category
std::string Laptop::getCategory() const
{
    return "Laptop";
}

// Method for displaying details
void Laptop::displayDetails() const
{
    std::cout << static_cast<std::string>(*this);
}
// Operator overloading
bool Laptop::operator==(const Product &other) const
{
    // Check if the other object is of the same type as Laptop
    if (typeid(other) == typeid(Laptop))
    {
        // Convert the 'other' object to a Laptop reference
        const Laptop &otherLaptop = static_cast<const Laptop &>(other);
        // Perform comparison
        return (Product::operator==(other) &&
                cpu == otherLaptop.cpu &&
                ram == otherLaptop.ram);
    }
    // If the other object is not a Laptop, return false
    return false;
}

Laptop::operator std::string() const
{
    std::stringstream result;
    result << "| " << std::setw(10) << std::left << getBrand() << " | "
           << std::setw(20) << std::left << getModel() << " | "
           << std::setw(8) << std::right << std::fixed << std::setprecision(2) << getPrice() << " | "
           << std::setw(10) << std::right << getSerialNumber() << " | "
           << std::setw(15) << std::right << getCpu() << " | "
           << std::setw(10) << std::right << getRam() << "GB |" << std::endl;
    return result.str();
}
