
// To test and run your code on the virtual machine using the command line, you can use the following steps.
// First, make sure you are in the correct directory, then compile the code using the following commands
// to compile and then run your code.
// To Compile: g++ -Wall -std=c++17 -g -o a1test Product.cpp Smartphone.cpp Laptop.cpp Utilities.cpp Inventory.h a1tester.cpp
// To Run: ./a1test
// After compiling and testing your code, run your program as following 
// to check for possible memory leaks (assuming your executable name is a1test):
// To check memory leaks: valgrind --leak-check=yes ./a1test



#include <iostream>
#include<iomanip>
#include "Inventory.h"
#include "Product.h"
#include "Smartphone.h"
#include "Laptop.h"



bool testInitialization() {
   Smartphone phone("Test Brand", "Test Model", 100.0, "SN000001", "TestOS", 128, 3000);
   return phone.getOperatingSystem() == "TestOS" &&
       phone.getStorageCapacity() == 128 &&
       phone.getBatteryCapacity() == 3000;
}

bool testgetCategory() {
   Smartphone phone("Test Brand", "Test Model", 100.0, "SN778899", "iOS", 128, 3000);
   return phone.getOperatingSystem() == "iOS" &&
       phone.getStorageCapacity() == 128 &&
       phone.getBatteryCapacity() == 3000 && phone.getCategory() == "Smartphone";
}

// Function to test the setters and getters
bool testSettersAndGetters() {
   Smartphone phone("Test Brand", "Test Model", 100.0, "SN000002", "TestOS", 128, 3000);
   phone.setOperatingSystem("Android");
   phone.setStorageCapacity(256);
   phone.setBatteryCapacity(4000);

   return phone.getOperatingSystem() == "Android" &&
       phone.getStorageCapacity() == 256 &&
       phone.getBatteryCapacity() == 4000;
}

// Function to test the price calculation based on a hypothetical formula
bool testPriceCalculation() {
   // Assuming the price calculation formula is implemented as mentioned 
   Smartphone phone("Test Brand", "Test Model", 100.0, "SN000003", "TestOS", 128, 3000);
   double expectedPrice = 100.0 + (128 * 0.75) + (3000 * 0.05);
   return phone.getPrice() == expectedPrice;
}

bool testPriceCalAftUpdateStorgeCap() {
   // Assuming the price calculation formula is implemented as mentioned 
   Smartphone phone("Test Brand", "Test Model", 100.0, "SN000003", "TestOS", 128, 3000);
   double expectedPrice = 100.0 + (128 * 0.75) + (3000 * 0.05);
   bool tmp =  phone.getPrice() == expectedPrice;
   phone.setStorageCapacity(256);
   expectedPrice = 100.0 + (256 * 0.75) + (3000 * 0.05);
   return tmp && phone.getPrice() == expectedPrice;
}
bool testPriceCalAftUpdateBattCap() {
   // Assuming the price calculation formula is implemented as mentioned 
   Smartphone phone("Test Brand", "Test Model", 100.0, "SN000003", "TestOS", 128, 3000);
   double expectedPrice = 100.0 + (128 * 0.75) + (3000 * 0.05);
   bool tmp = phone.getPrice() == expectedPrice;
   phone.setBatteryCapacity(4000);
   expectedPrice = 100.0 + (128 * 0.75) + (4000 * 0.05);
   return tmp && phone.getPrice() == expectedPrice;
}
bool testTypeConversionWithDefaultAttributes() {
   // Initialize a Smartphone with known values
   Smartphone phone("DefaultBrand", "DefaultModel", 500.49, "SN000004", "DefaultOS", 64, 2000);
   
   // Expected string representation of the above Smartphone object
   std::string expected = "| DefaultBrand | DefaultModel         |   648.49 |   SN000004 |       DefaultOS |         64GB |       2000mAh|\n";

   // Convert the phone object to string and compare with expected
   std::string result = static_cast<std::string>(phone);
   
   return result == expected;
}

bool testTypeConversionWithCustomAttributes() {

   Smartphone phone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
   std::string phoneStr = static_cast<std::string> (phone);
   

   std::string expectedStr = "| Samsung    | Galaxy S21           |  1295.99 |   SN123456 |         Android |        128GB |       4000mAh|\n";

   return phoneStr == expectedStr;


}

bool testIdenticalSmartphonesEqual() {
   Smartphone phone1("BrandA", "ModelX", 500, "SN001", "Android", 64, 3000);
   Smartphone phone2("BrandA", "ModelX", 500, "SN001", "Android", 64, 3000);

   return phone1 == phone2; // Should return true
}

bool testDifferentSmartphonesNotEqual1() {
   Smartphone phone1("BrandA", "ModelX", 500, "SN001", "Android", 128, 3000);
   Smartphone phone2("BrandA", "ModelX", 500, "SN001", "iOS", 128, 3000);

   return !(phone1 == phone2); // Should return true because we expect them to be not equal
}
bool testDifferentSmartphonesNotEqual2() {
   Smartphone phone1("BrandA", "ModelX", 500, "SN001", "Android", 64, 3000);
   Smartphone phone2("BrandA", "ModelX", 500, "SN001", "Android", 128, 3000);

   return !(phone1 == phone2); // Should return true because we expect them to be not equal
}


bool testLaptopInitializationAndGetter() {
   Laptop laptop("Lenovo", "ThinkPad X1 Carbon", 1200.00, "SN300001", "Intel Core i5", 8);
   return laptop.getBrand() == "Lenovo" &&
       laptop.getModel() == "ThinkPad X1 Carbon" &&
       laptop.getPrice() == (1200.00 + (8 * 20.0)) && 
       laptop.getSerialNumber() == "SN300001" &&
       laptop.getCpu() == "Intel Core i5" &&
       laptop.getRam() == 8;
}

bool testLaptopSettersAndPriceCalculation() {
   Laptop laptop("Dell", "XPS 15", 1500.00, "SN300002", "Intel Core i7", 16);
   laptop.setRam(32); 
   double expectedPrice = (1500.00 + (32 * 20.0)); 
   return laptop.getRam() == 32 &&
       laptop.getPrice() == expectedPrice;
}

bool testLaptopTypeConversionToString() {
   Laptop laptop("HP", "Spectre x360", 1600.00, "SN300003", "Intel Core i7", 16);
   
   
   std::string expectedString = "| HP         | Spectre x360         |  1920.00 |   SN300003 |   Intel Core i7 |         16GB |\n"; 
   std::string laptopString = static_cast<std::string>(laptop);
   
   return laptopString == expectedString;
}

bool testLaptopgetCategory() {
   Laptop laptop("Dell", "XPS 15", 1500.00, "SN300002", "Intel Core i7", 16);
   laptop.setCpu ("Intel Core i5");
   laptop.setRam(8);
   return laptop.getBrand() == "Dell" &&
       laptop.getModel() == "XPS 15" &&
       laptop.getCpu() == "Intel Core i5" &&
       laptop.getCategory() == "Laptop" &&
       laptop.getRam() == 8;
}

bool testIdenticalLaptopsEqual() {
   Laptop laptop1("BrandL", "ModelL1", 1000, "LN002", "Intel Core i7", 16);
   Laptop laptop2("BrandL", "ModelL1", 1000, "LN002", "Intel Core i7", 16);

   return laptop1 == laptop2; // Should return true
}

bool testDifferentLaptopsNotEqual1() {
   Laptop laptop1("BrandL", "ModelL2", 1200, "LN003", "Intel Core i9", 32);
   Laptop laptop2("BrandL", "ModelL2", 1200, "LN003", "AMD Ryzen 9", 32); 

   return !(laptop1 == laptop2); // Should return true because they are expected to be not equal
}

bool testDifferentLaptopsNotEqual2() {
   Laptop laptop1("BrandL", "ModelL2", 1200, "LN003", "Intel Core i9", 32);
   Laptop laptop2("BrandL", "ModelL2", 1200, "LN003", "Intel Core i9", 64);

   return !(laptop1 == laptop2); // Should return true because they are expected to be not equal
}

bool testCaseAddSingleSmartphone1() {
   Inventory<Smartphone*> inventory;
   Smartphone* phone = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
   inventory + phone;

   // Assuming a method to get the count or verify the first item exists
   return inventory.size() == 1;
}



bool testCaseAddSingleSmartphone2() {
   Inventory<Product*> inventory;
   Smartphone* phone = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
   inventory + phone;

   // Assuming a method to get the count or verify the first item exists
   return inventory.size() == 1 &&
       inventory.countByCategory("Laptop") == 0;
}

// add single smartphone and check cout by category inside the inventory
bool testCaseAddSingleSmartphone3() {
   Inventory<Product*> inventory;
   Product* phone = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
   inventory + phone;

   // the size of the inventory should be 1 and the count of the category "Smartphone" should be 1
   // and the count of the category "Laptop" should be 0
   return inventory.size() == 1 && 
       inventory.countByCategory("Smartphone")==1 &&
       inventory.countByCategory("Laptop")==0;
}

// add multiple smartphones
bool testCaseAddMultipleSmartphones() {
	Inventory<Product*> inventory;
   Product* phone1 = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
   Product* phone2 = new Smartphone("Apple", "iPhone 13", 999.99, "SN123457", "iOS", 128, 4000);    
   Product* phone3 = new Smartphone("Motorola", "Edge 20", 499.99, "SN998877", "Android", 128, 5000);    
   Product* phone4 = new Smartphone("Sony", "Xperia 5 II", 899.99, "SN665544", "Android", 128, 4000);
	inventory + phone1;
	inventory + phone2 + phone3 + phone4;

	// Verify both smartphones were added
   // the size of the inventory should be 2 and the count of the category "Smartphone" should be 2
   // and the count of the category "Laptop" should be 0
	return inventory.size() == 4 && inventory.countByCategory("Smartphone") == 4 &&
       inventory.countByCategory("Laptop") == 0;
}

// add single laptop and check cout by category inside the inventory
bool testCaseAddSingleLaptop1() {
	Inventory<Product*> inventory;
   // create a new laptop Asus,ROG Zephyrus G14,1450.00,       SN200005  ,AMD Ryzen 9,16
   Product* laptop = new Laptop("Asus", "ROG Zephyrus G14", 1450.00, "SN200005", "AMD Ryzen 9", 16);
	
	inventory + laptop;

	// the size of the inventory should be 1 and the count of the category "Smartphone" should be 0
	// and the count of the category "Laptop" should be 1
	return inventory.size() == 1 && inventory.countByCategory("Smartphone") == 0 &&
		inventory.countByCategory("Laptop") == 1;
}

// add single laptop and check cout by category inside the inventory
bool testCaseAddSingleLaptop2() {
	Inventory<Laptop*> inventory;
   // create a new laptop Microsoft,Surface Laptop 4,  999.99  ,SN200007,Intel Core i5,8
   Laptop* laptop = new Laptop("Microsoft", "Surface Laptop 4", 999.99, "SN200007", "Intel Core i5", 8);

	inventory + laptop;

	// the size of the inventory should be 1 and the count of the category "Smartphone" should be 0
	// and the count of the category "Laptop" should be 1
	return inventory.size() == 1 && inventory.countByCategory("Smartphone") == 0 &&
		inventory.countByCategory("Laptop") == 1;
}

bool testCaseAddMultipleLaptops() {
   Inventory<Laptop*> inventory;
   Laptop* laptop1 = new Laptop("Dell", "XPS 15", 1500.00, "SN200001", "Intel Core i7", 16);
   Laptop* laptop2 = new Laptop("Apple", "MacBook Pro 16", 2399.00, "SN200002", "Apple M1 Pro", 16);    
   Laptop* laptop3 = new Laptop("MSI", "GS66 Stealth", 2200.00, "SN200009", "Intel Core i7", 32);
   inventory + laptop1 + laptop3;
   inventory + laptop2;

   // Verify both laptops were added
   // the size of the inventory should be 2 and the count of the category "Smartphone" should be 0
   // and the count of the category "Laptop" should be 2
   return inventory.size() == 3 && inventory.countByCategory("Smartphone") == 0 &&
       inventory.countByCategory("Laptop") == 3;
}

// add mutliple laptops and smartphones
bool testCaseAddMultipleLaptopsAndSmartphones() {
	Inventory<Product*> inventory;
	Product* phone1 = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
	Product* phone2 = new Smartphone("Apple", "iPhone 13", 999.99, "SN123457", "iOS", 128, 4000);    
	Product* phone3 = new Smartphone("Motorola", "Edge 20", 499.99, "SN998877", "Android", 128, 5000);    
	Product* phone4 = new Smartphone("Sony", "Xperia 5 II", 899.99, "SN665544", "Android", 128, 4000);
	Product* laptop1 = new Laptop("Dell", "XPS 15", 1500.00, "SN200001", "Intel Core i7", 16);
	Product* laptop2 = new Laptop("Apple", "MacBook Pro 16", 2399.00, "SN200002", "Apple M1 Pro", 16);    
	Product* laptop3 = new Laptop("MSI", "GS66 Stealth", 2200.00, "SN200009", "Intel Core i7", 32);
	inventory + phone1 + phone2 + phone3 + phone4 + laptop1 + laptop2 + laptop3;

	// Verify all products were added
	// the size of the inventory should be 7 and the count of the category "Smartphone" should be 4
	// and the count of the category "Laptop" should be 3
	return inventory.size() == 7 && inventory.countByCategory("Smartphone") == 4 &&
		inventory.countByCategory("Laptop") == 3;
}

// add single smartphone and check cout by category inside the inventory
// then remove it and check the count by category again
bool testCaseRemoveSingleSmartphone1() {
	Inventory<Product*> inventory;
	// create a new smartphone Samsung,Galaxy S21,999.99,SN123456,Android,128,4000
	Product* phone = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
	// check the count by category before adding the smartphone
	// the size of the inventory should be 0 and the count of the category "Smartphone" should be 0
	// and the count of the category "Laptop" should be 0
   if (inventory.size() != 0 ||
       inventory.countByCategory("Smartphone") != 0 || inventory.countByCategory("Laptop") != 0) {
		return false;
	}
	inventory + phone; // add the smartphone to the inventory

	// the size of the inventory should be 1 and the count of the category "Smartphone" should be 1
	// and the count of the category "Laptop" should be 0
   if (inventory.size() != 1 ||
       inventory.countByCategory("Smartphone") != 1 || inventory.countByCategory("Laptop") != 0) {
		return false;
	}
	inventory - phone;

	// the size of the inventory should be 0 and the count of the category "Smartphone" should be 0
	// and the count of the category "Laptop" should be 0
   if (inventory.size() != 0 ||
       inventory.countByCategory("Smartphone") != 0 || inventory.countByCategory("Laptop") != 0) {
		return false;
	}
	return true;
}




// add single laptop and check cout by category inside the inventory
// then remove it and check the count by category again
bool testCaseRemoveSingleLaptop1() {
	Inventory<Product*> inventory;
	// create a new laptop Asus,ROG Zephyrus G14,1450.00,       SN200005  ,AMD Ryzen 9,16
	Product* laptop = new Laptop("Asus", "ROG Zephyrus G14", 1450.00, "SN200005", "AMD Ryzen 9", 16);
	// check the count by category before adding the laptop
   // the size of the inventory should be 0 and the count of the category "Smartphone" should be 0
   // and the count of the category "Laptop" should be 0
   if (inventory.size() != 0 || 
       inventory.countByCategory("Smartphone") != 0 || inventory.countByCategory("Laptop") != 0) {
		return false;
	}
	inventory + laptop;

   // the size of the inventory should be 1 and the count of the category "Smartphone" should be 0
   // and the count of the category "Laptop" should be 1
   if (inventory.size() != 1 ||
       inventory.countByCategory("Smartphone") != 0 || inventory.countByCategory("Laptop") != 1) {
       return false;
   }
	inventory - laptop;

	// the size of the inventory should be 0 and the count of the category "Smartphone" should be 0
	// and the count of the category "Laptop" should be 0
	return inventory.size() == 0 && inventory.countByCategory("Smartphone") == 0 &&
		inventory.countByCategory("Laptop") == 0;
}

// add multiple laptops and smartphones and remove them some of them and check the count by category
bool testCaseRemoveMultipleLaptopsAndSmartphones() {
	Inventory<Product*> inventory;
	Product* phone1 = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
	Product* phone2 = new Smartphone("Apple", "iPhone 13", 999.99, "SN123457", "iOS", 128, 4000);
	Product* phone3 = new Smartphone("Motorola", "Edge 20", 499.99, "SN998877", "Android", 128, 5000);
	Product* phone4 = new Smartphone("Sony", "Xperia 5 II", 899.99, "SN665544", "Android", 128, 4000);
	Product* laptop1 = new Laptop("Dell", "XPS 15", 1500.00, "SN200001", "Intel Core i7", 16);
	Product* laptop2 = new Laptop("Apple", "MacBook Pro 16", 2399.00, "SN200002", "Apple M1 Pro", 16);
	Product* laptop3 = new Laptop("MSI", "GS66 Stealth", 2200.00, "SN200009", "Intel Core i7", 32);
	inventory + phone1 + phone2 + phone3 + phone4 + laptop1 + laptop2 + laptop3;

	// Verify all products were added
	// the size of the inventory should be 7 and the count of the category "Smartphone" should be 4
	// and the count of the category "Laptop" should be 3
   if (inventory.size() != 7 || inventory.countByCategory("Smartphone") != 4 ||
       inventory.countByCategory("Laptop") != 3) {
		return false;
	}
	inventory - phone1 - phone2 - laptop1 - laptop2;

	// the size of the inventory should be 3 and the count of the category "Smartphone" should be 2
	// and the count of the category "Laptop" should be 1
   if (inventory.size() != 3 || inventory.countByCategory("Smartphone") != 2 ||
       inventory.countByCategory("Laptop") != 1) {
		return false;
	}
   
   inventory + new Smartphone("Nokia", "8.3 5G", 649.99, "SN556677", "Android", 128, 4500);
   inventory + new Laptop("Lenovo", "Legion 5 Pro", 1500.00, "SN200010", "AMD Ryzen 7", 16);

   // check the count by category after adding new products
   // the size of the inventory should be 5 and the count of the category "Smartphone" should be 3
   // and the count of the category "Laptop" should be 2
   if (inventory.size() != 5 || inventory.countByCategory("Smartphone") != 3 ||
       inventory.countByCategory("Laptop") != 2) {
		return false;
	}
    
   // remove smartphone and laptop
   inventory - new Smartphone("Nokia", "8.3 5G", 649.99, "SN556677", "Android", 128, 4500);
   inventory - new Laptop("Lenovo", "Legion 5 Pro", 1500.00, "SN200010", "AMD Ryzen 7", 16);
    
   // return true if the size of the inventory is 3 and the count of the category "Smartphone" is 2
   // and the count of the category "Laptop" is 1
   return inventory.size() == 3 && inventory.countByCategory("Smartphone") == 2 &&
       inventory.countByCategory("Laptop") == 1;
   
   

	

}



// create test case that test the function calculateTotalValue and check if it returns the correct value
// return value is double so we need to compare the result with a small error
bool testMultAddCalculateTotalValue() {
	Inventory<Product*> inventory;
	Product* phone1 = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
	Product* phone2 = new Smartphone("Apple", "iPhone 13", 999.99, "SN123457", "iOS", 128, 4000);
	Product* phone3 = new Smartphone("Motorola", "Edge 20", 499.99, "SN998877", "Android", 128, 5000);
	Product* phone4 = new Smartphone("Sony", "Xperia 5 II", 899.99, "SN665544", "Android", 128, 4000);
	Product* laptop1 = new Laptop("Dell", "XPS 15", 1500.00, "SN200001", "Intel Core i7", 16);
	Product* laptop2 = new Laptop("Apple", "MacBook Pro 16", 2399.00, "SN200002", "Apple M1 Pro", 16);
	Product* laptop3 = new Laptop("MSI", "GS66 Stealth", 2200.00, "SN200009", "Intel Core i7", 32);
	inventory + phone1 + phone2 + phone3 + phone4 + laptop1 + laptop2 + laptop3;
   double expected = 12012.96;
   double actual = inventory.calculateTotalValue();
   return abs(expected - actual) <= 0.0001;
}
// empty inventory should return 0
bool testCalculateTotalValue1() {
   Inventory<Product*> inventory; // Assuming Inventory is properly templated
   double expected = 0.0;
   double actual = inventory.calculateTotalValue();
   return abs(expected - actual) <= 0.0001;

}
// add one smartphone and check if the total value is correct
bool testCalculateTotalValue2() {
   Inventory<Product*> inventory; 
   Product* phone1 = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
   inventory + phone1;
   double expected = 1295.99;
   double actual = inventory.calculateTotalValue();
   return abs(expected - actual) <= 0.0001;

}

// Add one laptop and one smartphone and check if the total value is correct
bool testCalculateTotalValue3() {
	Inventory<Laptop*> inventory;
   Laptop* laptop1 = new Laptop("Dell", "XPS 15", 1500.00, "SN200001", "Intel Core i7", 16);
	inventory + laptop1;
	double expected = 1820.00;
	double actual = inventory.calculateTotalValue();
	return abs(expected - actual) <= 0.0001;

}
// add two laptops and check if the total value is correct , then remove one laptop and check again
bool testCalculateTotalValue4() {
	Inventory<Laptop*> inventory;
	Laptop* laptop1 = new Laptop("Dell", "XPS 15", 1500.00, "SN200001", "Intel Core i7", 16);
	Laptop* laptop2 = new Laptop("Apple", "MacBook Pro 16", 2399.00, "SN200002", "Apple M1 Pro", 16);
	inventory + laptop1 + laptop2;
	double expected = 4539.00;
	double actual = inventory.calculateTotalValue();
	if (abs(expected - actual) > 0.0001) {
		return false;
	}
	inventory - laptop1;
	expected = 2719.00;
	actual = inventory.calculateTotalValue();
	return abs(expected - actual) <= 0.0001;
}

// add two smartphones and check if the total value is correct , then remove one smartphone and check again
bool testCalculateTotalValue5() {
	Inventory<Smartphone*> inventory;
	Smartphone* phone1 = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
	Smartphone* phone2 = new Smartphone("Apple", "iPhone 13", 999.99, "SN123457", "iOS", 128, 4000);
	inventory + phone1 + phone2;
	
	double expected = 2591.98;
	double actual = inventory.calculateTotalValue();
	if (abs(expected - actual) > 0.0001) {
		return false;
	}
	inventory - phone1;
	expected = 1295.99;
	actual = inventory.calculateTotalValue();
	return abs(expected - actual) <= 0.0001;
}


// add mix of laptops and smartphones and check if the total value is correct then remove some and check again
bool testCalculateTotalValue6() {
   Inventory<Product*> inventory;
   Product* phone1 = new Smartphone("Samsung", "Galaxy S21", 999.99, "SN123456", "Android", 128, 4000);
   Product* phone2 = new Smartphone("Apple", "iPhone 13", 999.99, "SN123457", "iOS", 128, 4000);
   Product* phone3 = new Smartphone("Motorola", "Edge 20", 499.99, "SN998877", "Android", 128, 5000);
   Product* phone4 = new Smartphone("Sony", "Xperia 5 II", 899.99, "SN665544", "Android", 128, 4000);
   Product* laptop1 = new Laptop("Dell", "XPS 15", 1500.00, "SN200001", "Intel Core i7", 16);
   Product* laptop2 = new Laptop("Apple", "MacBook Pro 16", 2399.00, "SN200002", "Apple M1 Pro", 16);
   Product* laptop3 = new Laptop("MSI", "GS66 Stealth", 2200.00, "SN200009", "Intel Core i7", 32);
   inventory + phone1 + phone2 + phone3 + phone4 + laptop1 + laptop2 + laptop3;

	double expected = 12012.96;
	double actual = inventory.calculateTotalValue();
	if (abs(expected - actual) > 0.0001) {
		return false;
	}
	inventory - phone1 - phone2 - laptop1 - laptop2;
	expected = 4881.98;
	actual = inventory.calculateTotalValue();
	return abs(expected - actual) <= 0.0001;
}




void runAllSmartPhoneTests() {
   int passed = 0;
   int failed = 0;

   if (testInitialization()) {
       std::cout << "Test testInitialization Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testInitialization Failed.\n";
       failed++;
   }


   if (testgetCategory()) {
		std::cout << "Test testgetCategory Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testgetCategory Failed.\n";
		failed++;
	}

   if (testSettersAndGetters()) {
		std::cout << "Test testSettersAndGetters Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testSettersAndGetters Failed.\n";
		failed++;
	}

   if (testPriceCalculation()) {
       std::cout << "Test testPriceCalculation Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testPriceCalculation Failed.\n";
       failed++;
   }

   if (testPriceCalAftUpdateStorgeCap()) {
		std::cout << "Test testPriceCalAftUpdateStorgeCap Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testPriceCalAftUpdateStorgeCap Failed.\n";
		failed++;
	}

   if (testPriceCalAftUpdateBattCap()) {
       std::cout << "Test testPriceCalAftUpdateBattCap Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testPriceCalAftUpdateBattCap Failed.\n";
       failed++;
   }

   if (testTypeConversionWithDefaultAttributes()) {
		std::cout << "Test testTypeConversionWithDefaultAttributes Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testTypeConversionWithDefaultAttributes Failed.\n";
		failed++;
	}

   if (testTypeConversionWithCustomAttributes()) {
       std::cout << "Test testTypeConversionWithCustomAttributes Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testTypeConversionWithCustomAttributes Failed.\n";
       failed++;
   }

   if (testIdenticalSmartphonesEqual()) {
		std::cout << "Test testIdenticalSmartphonesEqual Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testIdenticalSmartphonesEqual Failed.\n";
		failed++;
	}

   if (testDifferentSmartphonesNotEqual1()) {
		std::cout << "Test testDifferentSmartphonesNotEqual1 Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testDifferentSmartphonesNotEqual1 Failed.\n";
		failed++;
	}

   if (testDifferentSmartphonesNotEqual2()) {
       std::cout << "Test testDifferentSmartphonesNotEqual2 Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testDifferentSmartphonesNotEqual2 Failed.\n";
       failed++;
   }


   // Report summary
   int total = passed + failed;
   double passedPercentage = (total > 0) ? (static_cast<double>(passed) / total * 100) : 0;
   double failedPercentage = (total > 0) ? (static_cast<double>(failed) / total * 100) : 0;
   std::cout << "\n-----------------------------------------\n";
   std::cout << "Test Smartphone Summary:" << std::endl;
   std::cout << "Total Tests: " << total << std::endl;
   std::cout << "Passed: " << passed << " (" << passedPercentage << "%)" << std::endl;
   std::cout << "Failed: " << failed << " (" << failedPercentage << "%)" << std::endl;
   std::cout << "-----------------------------------------\n";
}


void runAllLaptopTests() {
   int passed = 0;
   int failed = 0;
   if (testLaptopInitializationAndGetter()) {
       std::cout << "Test testLaptopInitializationAndGetter Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testLaptopInitializationAndGetter Failed.\n";
       failed++;
   }
   if (testLaptopSettersAndPriceCalculation()) {
       std::cout << "Test testLaptopSettersAndPriceCalculation Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testLaptopSettersAndPriceCalculation Failed.\n";
       failed++;
   }

   if (testLaptopTypeConversionToString()) {
       std::cout << "Test testLaptopTypeConversionToString Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testLaptopTypeConversionToString Failed.\n";
       failed++;
   }

   if (testLaptopgetCategory()) {
		std::cout << "Test testLaptopgetCategory Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testLaptopgetCategory Failed.\n";
		failed++;
	}
   if (testIdenticalLaptopsEqual()) {
       std::cout << "Test testIdenticalLaptopsEqual Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testIdenticalLaptopsEqual Failed.\n";
       failed++;
   }

   if (testDifferentLaptopsNotEqual1()) {
		std::cout << "Test testDifferentLaptopsNotEqual1 Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testDifferentLaptopsNotEqual1 Failed.\n";
		failed++;
	}

   if (testDifferentLaptopsNotEqual2()) {
		std::cout << "Test testDifferentLaptopsNotEqual2 Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testDifferentLaptopsNotEqual2 Failed.\n";
		failed++;
	}

   // Report summary
   int total = passed + failed;
   double passedPercentage = (total > 0) ? (static_cast<double>(passed) / total * 100) : 0;
   double failedPercentage = (total > 0) ? (static_cast<double>(failed) / total * 100) : 0;
   std::cout << "\n-----------------------------------------\n";
   std::cout << "Test Laptop Summary:" << std::endl;
   std::cout << "Total Tests: " << total << std::endl;
   std::cout << "Passed: " << passed << " (" << passedPercentage << "%)" << std::endl;
   std::cout << "Failed: " << failed << " (" << failedPercentage << "%)" << std::endl;
   std::cout << "-----------------------------------------\n";
}


void runAllInventoryTests() {
   int passed = 0;
   int failed = 0;

   if (testCaseAddSingleSmartphone1()) {
       std::cout << "Test testCaseAddSingleSmartphone1 Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testCaseAddSingleSmartphone1 Failed.\n";
       failed++;
   }

   if (testCaseAddSingleSmartphone2()) {
		std::cout << "Test testCaseAddSingleSmartphone2 Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testCaseAddSingleSmartphone2 Failed.\n";
		failed++;
	}

   if (testCaseAddSingleSmartphone3()) {
       std::cout << "Test testCaseAddSingleSmartphone3 Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testCaseAddSingleSmartphone3 Failed.\n";
       failed++;
   }
   if (testCaseAddMultipleSmartphones()) {
       std::cout << "Test testCaseAddMultipleSmartphones Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testCaseAddMultipleSmartphones Failed.\n";
       failed++;
   }



   if (testCaseAddSingleLaptop1()) {
		std::cout << "Test testCaseAddSingleLaptop1 Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testCaseAddSingleLaptop1 Failed.\n";
		failed++;
	}
   
   if (testCaseAddSingleLaptop2()) {
       std::cout << "Test testCaseAddSingleLaptop2 Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testCaseAddSingleLaptop2 Failed.\n";
       failed++;
   }

   

   if (testCaseAddMultipleLaptops()) {
		std::cout << "Test testCaseAddMultipleLaptops Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testCaseAddMultipleLaptops Failed.\n";
		failed++;
	}

   if (testCaseAddMultipleLaptopsAndSmartphones()) {
       std::cout << "Test testCaseAddMultipleLaptopsAndSmartphones Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testCaseAddMultipleLaptopsAndSmartphones Failed.\n";
       failed++;
   }
   if (testCaseRemoveSingleSmartphone1()) {
       std::cout << "Test testCaseRemoveSingleSmartphone1 Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testCaseRemoveSingleSmartphone1 Failed.\n";
       failed++;
   }


   if (testCaseRemoveSingleLaptop1()) {
		std::cout << "Test testCaseRemoveSingleLaptop1 Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testCaseRemoveSingleLaptop1 Failed.\n";
		failed++;
	}

   if (testCaseRemoveMultipleLaptopsAndSmartphones()) {
		std::cout << "Test testCaseRemoveMultipleLaptopsAndSmartphones Passed.\n";
		passed++;
	}
   else {
		std::cout << "Test testCaseRemoveMultipleLaptopsAndSmartphones Failed.\n";
		failed++;
	}
   if (testMultAddCalculateTotalValue()) {
       std::cout << "Test testMultAddCalculateTotalValue Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testMultAddCalculateTotalValue Failed.\n";
       failed++;
   }

   if (testCalculateTotalValue1()) {
		std::cout << "Test testCalculateTotalValue1 Passed.\n";
		passed++;
	}
	else {
		std::cout << "Test testCalculateTotalValue1 Failed.\n";
		failed++;
	}

   if (testCalculateTotalValue2()) {
       std::cout << "Test testCalculateTotalValue2 Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testCalculateTotalValue2 Failed.\n";
       failed++;
   }

   if (testCalculateTotalValue3()) {
		std::cout << "Test testCalculateTotalValue3 Passed.\n";
		passed++;
	}
	else {
		std::cout << "Test testCalculateTotalValue3 Failed.\n";
		failed++;
	}

   if (testCalculateTotalValue4()) {
		std::cout << "Test testCalculateTotalValue4 Passed.\n";
		passed++;
	}
	else {
		std::cout << "Test testCalculateTotalValue4 Failed.\n";
		failed++;
	}

   if (testCalculateTotalValue5()) {
       std::cout << "Test testCalculateTotalValue5 Passed.\n";
       passed++;
   }
   else {
       std::cout << "Test testCalculateTotalValue5 Failed.\n";
       failed++;
   }

   if (testCalculateTotalValue6()) {
		std::cout << "Test testCalculateTotalValue6 Passed.\n";
		passed++;
	}
	else {
		std::cout << "Test testCalculateTotalValue6 Failed.\n";
		failed++;
	}



   // Report summary
   int total = passed + failed;
   double passedPercentage = (total > 0) ? (static_cast<double>(passed) / total * 100) : 0;
   double failedPercentage = (total > 0) ? (static_cast<double>(failed) / total * 100) : 0;
   std::cout << "\n-----------------------------------------\n";
   std::cout << "Test Inventory Summary:" << std::endl;
   std::cout << "Total Tests: " << total << std::endl;
   std::cout << "Passed: " << passed << " (" << passedPercentage << "%)" << std::endl;
   std::cout << "Failed: " << failed << " (" << failedPercentage << "%)" << std::endl;
   std::cout << "-----------------------------------------\n";
}
// Main function to run tests
int main() {
   runAllSmartPhoneTests();
   runAllLaptopTests();
   runAllInventoryTests();
   return 0;
}
