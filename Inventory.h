///////////////////////////////////////////////////////////////////////////
// File Name: Inventory.h
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////

#ifndef INVENTORY_H
#define INVENTORY_H
#include "Smartphone.h"
#include "Laptop.h"
#include <iostream>
#include <type_traits>
#include <string>

// Forward declaration of the template class
template <typename T>
class Inventory
{
private:
    // Private members
    T *items;     // Pointer to the array of items
    int capacity; // Capacity of the inventory
    int count;    // Current count of items in the inventory

    // Private helper function to resize the items array
    void resize();

public:
    // Constructor
    Inventory(int initialCapacity = 4);

    // Destructor
    ~Inventory();

    // Operator overloading
    Inventory &operator+(T item);         // Overloading + operator to add items
    Inventory &operator-(T itemToRemove); // Overloading - operator to remove items

    // Other member functions
    int countByCategory(const std::string &category) const;             // Count items by category
    double calculateTotalValue() const;                                 // Calculate total value of inventory
    int size() const;                                                   // Get current number of items in the inventory
    void displayInventoryByCategory(const std::string &category) const; // Display inventory items by category
};

// Constructor definition
template <typename T>
Inventory<T>::Inventory(int initialCapacity) : capacity(initialCapacity), count(0)
{
    items = new T[capacity];
}

// Destructor definition
template <typename T>
Inventory<T>::~Inventory()
{
    for (int i = 0; i < count; ++i)
    {
        delete items[i];
    }
    delete[] items;
}

// Operator overloading for adding items
template <typename T>
Inventory<T> &Inventory<T>::operator+(T item)
{
    if (count == capacity)
    {
        resize();
    }
    items[count++] = item;
    return *this;
}

// Operator overloading for removing items
template <typename T>
Inventory<T> &Inventory<T>::operator-(T itemToRemove)
{
    for (int i = 0; i < count; ++i)
    {
        if (*items[i] == *itemToRemove)
        {
            delete items[i]; // Release memory for the removed item
            for (int j = i; j < count - 1; ++j)
            {
                items[j] = items[j + 1];
            }
            items[count - 1] = nullptr;

            --count;
            break;
        }
    }
    return *this;
}

// Helper function to resize the items array
template <typename T>
void Inventory<T>::resize()
{
    capacity *= 2;
    T *newArray = new T[capacity];
    for (int i = 0; i < count; ++i)
    {
        newArray[i] = items[i];
    }
    delete[] items;
    items = newArray;
}

// Count items by category
template <typename T>
int Inventory<T>::countByCategory(const std::string &category) const
{
    int categoryCount = 0;
    for (int i = 0; i < count; ++i)
    {
        if (items[i]->getCategory() == category)
        {
            ++categoryCount;
        }
    }
    return categoryCount;
}

// Calculate total value of inventory
template <typename T>
double Inventory<T>::calculateTotalValue() const
{
    double totalValue = 0.0;
    for (int i = 0; i < count; ++i)
    {
        totalValue += items[i]->getPrice();
    }
    return totalValue;
}

// Get current number of items in the inventory
template <typename T>
int Inventory<T>::size() const
{
    return count;
}

// Display inventory items by category
template <typename T>
void Inventory<T>::displayInventoryByCategory(const std::string &category) const
{
    for (int i = 0; i < count; ++i)
    {
        if (items[i]->getCategory() == category)
        {
            items[i]->displayDetails();
        }
    }
}

#endif // INVENTORY_H
