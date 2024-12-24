///////////////////////////////////////////////////////////////////////////
// File Name: Laptop.h
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#ifndef LAPTOP_H
#define LAPTOP_H

#include "Product.h"
#include <string>

class Laptop : public Product
{
private:
    std::string cpu;
    int ram;

public:
    // Constructor
    Laptop(std::string brand, std::string model, double basePrice, std::string serialNumber,
           std::string cpu, int ram);

    virtual ~Laptop() {}

    // Getter and setter methods for CPU and RAM
    std::string getCpu() const;
    void setCpu(const std::string &cpu);

    int getRam() const;
    void setRam(int ram);

    // Method for calculating price
    double getPrice() const override;
    double calculatePrice() const;

    // Method for getting category
    std::string getCategory() const override;

    // Method for displaying details
    void displayDetails() const override;

    // Operator overloading
    bool operator==(const Product &other) const override;
    explicit operator std::string() const;
};

#endif // LAPTOP_H
