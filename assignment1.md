# Assignment1: Inventory Management System
# Due Date: Sunday, March 31, 2024, before 23:59

## Instructions for Repository Creation:

- To complete and solve this assignment, you can work in a team of two (i.e., a group of two members) or independently (i.e., a group of one member). In either case, you must join one of the course groups. Check the Blackboard course site to do this, or if you want, you can meet with me during lecture or lab sessions to complete this step.
- Decide what you want to do, then use the instructions below to create your repository after you join a course group. Follow the instructions carefully. (if you are confused about how to complete this step, you can wait for the lecture or lab session so you can ask me)

	- [Instructions for Repository Creation for Students working in Groups of two members](../group-repo-creation.md)
	- [Instructions for Repository Creation for Students working on their own ( i.e., in Groups of one member)](../individual-repo-creation.md)


## Introduction

This assignment aims to design and implement an Inventory Management System capable of handling different types of products, specifically **smartphones** and **laptops**. Your implementation will involve creating a generic `Inventory` class, product base class (`Product`), and derived classes (`Smartphone` and `Laptop`). You will also implement functionalities to *add and remove products from the inventory*, *display products by category*, and *calculate the total value of inventory items*.


### Learning Outcomes and Objectives
This assignment represents a comprehensive opportunity to apply and reinforce a broad array of critical concepts in object-oriented programming and C++, making it an invaluable part of your learning journey in this course. By designing a class hierarchy with a base `Product` class and specialized `Smartphone` and `Laptop` derivatives, you will engage deeply with the **principles of generalization and specialization**, learning to minimize code duplication through effective use of **inheritance**. Furthermore, the requirement to implement **polymorphic behavior** not only through **interfaces and virtual functions** but also via **templates**, allows you to explore the power and flexibility of C++ in crafting reusable code components. Such experiences are crucial in developing a solid understanding of object-oriented design and the specific mechanisms C++ offers to solve complex programming challenges.

Beyond the core object-oriented principles, this assignment also pushes you to work with **raw pointers and dynamic memory management**, critical areas in C++ programming that require careful attention and skill. Handling an inventory of products dynamically adjusts to changing requirements, offering a practical scenario to apply these concepts. Moreover, by requiring the implementation of functionalities like adding and removing items, displaying items by category, and calculating the total inventory value, you gain hands-on experience with designing member functions that solve tasks of linear complexity and use stream objects for input/output operations. Completing this assignment not only ensures you master these essential programming constructs but also prepares you to tackle real-world problems with confidence, using object-oriented and C++ programming techniques.

#### Learning Outcomes
- **CLO1**: Design classes to model the components of a programming solution.
- **CLO2**: Design member functions using logic constructs to solve tasks of linear complexity.
- **CLO3**: Use stream objects to interact with users and access persistent data.
- **CLO4**: Trace the execution of object-oriented code to validate its correctness.
- **CLO5**: Develop an algorithm using object-oriented concepts to solve a simple programming problem.
- **CLO6**: Model generalization and specialization using single and multiple inheritance to minimize the duplication of code in complex hierarchies.
- **CLO7**: Model polymorphic behavior using interfaces, virtual functions and templates (generics) to amplify the reusability of code.
- **CLO9**: Design program components using raw pointers, pointer arithmetic and smart pointers to access data in program memory.


#### Assignment Learning Objective 
By completing this assignment, students will achieve the following learning objectives:

1. **Understand and Apply Object-Oriented Principles**: Understand core object-oriented programming principles such as *encapsulation*, *inheritance*, and *polymorphism*. Learn how to design classes that model real-world entities and their relationships.

2. **Design and Implement Class Hierarchies**: Develop the ability to design a class hierarchy that effectively uses *inheritance to promote code reuse and extendibility*. Understand when and how to use *base classes*, *derived classes*, and *virtual functions* to represent generalization and specialization relationships.

3. **Implement Polymorphic Behavior**: Learn to model polymorphic behavior using virtual functions and interfaces, allowing objects of different classes to be treated uniformly. Understand the significance of virtual destructors in base classes.

4. **Utilize Templates for Generic Programming**: Understand how to use *template classes to create generic and reusable code* that can operate with different data types, enhancing the flexibility and reusability of your C++ programs.

5. **Master Dynamic Memory Management**: Gain practical experience managing dynamic memory in C++, including allocating and deallocating memory for objects at runtime using pointers. Understand the importance of proper memory management to avoid memory leaks and dangling pointers.

6. **Work with Stream Objects**: Learn to use C++ stream objects for file input and output operations, enabling your programs to read from and write to files. Understand how to manipulate streams to format data for both input and output.

7. **Apply Operator Overloading**: Learn to *overload operators* to provide natural and intuitive operations for custom objects. Specifically, apply operator overloading to add and remove items from a collection class.

8. **Develop Algorithms Using Object-Oriented Concepts**: Enhance your algorithmic thinking within object-oriented programming, developing solutions that leverage objects and classes to solve problems.

9. **Trace and Debug Object-Oriented Code**: Improve your ability to trace the execution of object-oriented code, identify issues, and apply debugging techniques to ensure the correctness of your programs.

10. **Interact with Users and Access Persistent Data**: Develop programs that can interact with users through the console and persist data across sessions by reading from and writing to external files.




### Business Case

- Initially, understand the business case for the Inventory Management System. The objective is to create a versatile system capable of managing diverse products (smartphones and laptops), with functionalities to add, remove, display, and evaluate inventory items. This system could serve retailers, warehouses, or personal inventory management, highlighting the importance of flexibility, accuracy, and ease of use.

### Requirements and Analysis
- Next, delve into the requirements gathering and analysis phase. This involves defining clear, specific requirements for the system:

	- **Functional Requirements**: Include adding and removing products, displaying products by category, calculating the total inventory value, and ensuring polymorphic behavior for product display and comparison.
	- **Non-Functional Requirements**: Consider performance (e.g., efficiency of adding/removing items, especially as inventory grows), scalability (how well the system handles increasing amounts of products), and usability (ease of interacting with the system).

- Based on these requirements, analyze the needed class hierarchy, focusing on how `Product`, `Smartphone`, and `Laptop` classes relate and how the `Inventory` class can manage objects of these types polymorphically.

### Design
- In the design phase, outline the structure of your classes, including attributes and methods. Design the `Product` base class and its derived classes, ensuring you incorporate virtual methods for polymorphic behavior. Plan how the `Inventory` class template will manage an array of `Product` pointers, including dynamic resizing. Consider how operator overloading will be used to enhance the usability of the `Inventory` class.

### Implementation and Testing
- Implement your design in C++, starting with the base and derived product classes before moving on to the `Inventory` class. Develop your code iteratively, starting with basic functionality before adding more complex features. 

#### Testing:
- **Unit Testing**: Test individual components (classes) to ensure they function correctly in isolation. For instance, test the `displayDetails` method of `Smartphone` and `Laptop`, or the dynamic resizing of the `Inventory` array.
- **Integration Testing**: Test how components work together. For example, verify that adding a `Smartphone` to an `Inventory` and displaying by category correctly outputs the smartphone's details.
- **System Testing**: Test the entire system's functionality to ensure it meets all requirements.  

### Iteration with Feedback
- Software development is iterative. After initial implementation and testing, gather feedback on the system's functionality and usability. This feedback might come from peer reviews, user testing, or self-assessment. Use this feedback to refine and improve the system, going back through the design, implementation, and testing phases as necessary. 
- Remember, developing a robust software solution often requires revisiting and revising earlier decisions based on new insights or issues uncovered during testing. Embrace this iterative process, as it is crucial for enhancing the quality and functionality of your software.
  

## Submission Policy
The assignment should contain **only work done by your group this term** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, violating the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your group number**, **group members names , ****group member Seneca emails**, and the **date** when you completed the work.

- If the file contains only your work or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I declare this submission is the result of my own work and has not been shared with any other student or 3rd party content provider. This submitted piece of work is entirely of my own creation.
	
- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment/lab are given to you as help, who gave it to you, or which source you received it from.**  By doing this, you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrongdoing.

```
///////////////////////////////////////////////////////////////////////////
// File Name: 
// Group Number: 
// Group Members Names :
// Group Members Seneca Email :
// Date :
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////
```

## Assignment Task

### **Complete the Code**:

The following files have been provided for you: `Product.h`, `Product.cpp`, `Laptop.h`, `Laptop.cpp`, `Smartphone.h`, `Smartphone.cpp`, `Inventory.h`, `Utilities.h`, `Utilities.cpp`, `a1main.cpp` and `a1tester.cpp`

- `Product.h` and `Product.cpp`: These files are meant to declare and implement the abstract `Product` class. The `Product` class serves as the base class for different types of products in the inventory system. ** You need to implement the product class with common attributes and functionality across different product types**.

- `Laptop.h` and `Laptop.cpp`: To declare and implement the `Laptop` class, which inherits from the `Product` class, **you need to define laptop-specific attributes (e.g., `CPU,` `RAM`) and implement overridden methods from the `Product` class that caters to the specific details of a laptop**.

- `Smartphone.h` and `Smartphone.cpp`: To provide the declaration and implementation framework for the `Smartphone` class, which also inherits from the `Product` class. **You need to define smartphone-specific attributes (e.g., `operatingSystem`, `storageCapacity`, `batteryCapacity`) and implement methods tailored to smartphones**.

- `Inventory.h`: To declare and implement the `Inventory` template class capable of managing a collection of any product type. **You need to implement the template class, including functionalities to add and remove items, resize the inventory dynamically, and perform other inventory-related operations to the nature of template classes in C++; the declaration and definition should be in the same header file**.

- `Utilities.h` and `Utilities.cpp`: These files are intended to declare and implement utility functions that assist in the assignment. This may include functions for creating product objects from input data and processing files. **You need to implement utility functions such as `createProduct` and `processFile`, which will be crucial for initializing the inventory with data from files and supporting file-based operations within the system**.


- `a1main.cpp`: This partially implemented file serves as the main entry point for the assignment application. It will contain some predefined code structure and possibly some implemented functionalities. **You need to complete the TODO sections** based on the assignment requirements and sample output provided, integrating all system components to work together as intended.

- `a1tester.cpp`: Contains a suite of test cases designed to validate the correctness of the student's implementation of the assignment. Use this file to test their implementation. While the file comes with predefined test cases, students are encouraged to understand these test cases. **ALREADY IMPLEMENTED; DO NOT MODIFY**



### Implementing the `Product` Class
- The `Product` class serves as the foundation for your inventory management system, representing the basic attributes and behaviors common to all products in the system, such as smartphones and laptops. To successfully implement and extend this class, follow these guidelines and refer to the provided text-based UML diagram.
#### Implementation Instructions

1. **Constructor**: The provided constructor initializes a `Product` object with brand, model, price, and serial number. Ensure all parameters are properly assigned to the class's private attributes.

2. **Getters and Setters**: Implement getters and setters for all attributes. These methods allow external code to safely access and modify the `Product` attributes. Remember, getters should be marked as `const` to indicate they don't modify the object.

3. **Equality Operator (`operator==`)**: Overloading the equality operator allows comparing two `Product` objects. In this implementation, two products are considered equal if their **brand, model, and serial number are identical**. This method will be crucial for inventory management operations like adding, removing, or searching for products.

#### The `Product` UML Diagram

Here's a UML diagram for the `Product` class:

```cpp
+-----------------------------------------------+
|                    Product              	|
+-----------------------------------------------+
| -brand: std::string              		|
| -model: std::string              		|
| -price: double                   		|
| -serialNumber: std::string       		|
+-----------------------------------------------+
| +Product(brand: std::string,     		|
|          model: std::string,     		|
|          price: double,          		|
|          serialNumber: std::string)		|
| +getBrand(): const std::string   		|
| +setBrand(brand: std::string)    		|
| +getModel(): const std::string   		|
| +setModel(model: std::string)    		|
| +getPrice(): const double        		|
| +setPrice(price: double)         		|
| +getSerialNumber(): const std::string		|
| +setSerialNumber(serialNumber: std::string)	|
| +operator==(other: const Product&): bool	|
+-----------------------------------------------+
```

### Implementing the `Laptop` Class

- The `Laptop` class, derived from the `Product` base class, specializes in the `Product` class to model laptops more specifically. This class introduces additional attributes specific to laptops, such as CPU type and RAM size, along with specialized behavior for calculating the price based on these attributes.

#### Instructions for Implementation

1. **Inherit from `Product` Class**: Ensure `Laptop` properly inherits from `Product` and utilizes its constructor for initializing common attributes.

2. **Implement Constructor**: The constructor should initialize all attributes specific to `Laptop`, in addition to those inherited from `Product`.

3. **Implement Getters and Setters**: Provide getters and setters for the laptop-specific attributes (`cpu` and `ram`). This ensures external code can access and modify these attributes safely.

4. **Price Calculation**: Implement the `calculatePrice` method to define how the laptop's price is determined, considering the base price and additional cost based on RAM size. Price of a laptop is ```base price + (RAM * 20)```. It is a Hypothetical formula: each GB of RAM adds $20 to the base price.

5. **Type Conversion Operator**: Implement the type conversion to `std::string` to provide a string representation of a `Laptop` object, which will be useful for displaying laptop details. (**Check the sample output**)

6. **Display Details**: The `displayDetails` method should leverage the type conversion operator to print laptop details. This method showcases polymorphism by providing a behavior specific to the `Laptop`. (**Check the sample output**)

7. **Get Category**: Implement the `getCategory` method to return the string `"Laptop"`. This helps in identifying the product type during runtime.

8. **Equality Operator Overloading**: Overload the `operator==` to allow comparison of two `Laptop` objects, considering both the attributes inherited from `Product` and those specific to `Laptop`.

### The `Laptop` UML Diagram

``` cpp
+-----------------------------------------+
|                Laptop                   |
+-----------------------------------------+
| -cpu: std::string                       |
| -ram: int                               |
+-----------------------------------------+
| +Laptop(brand: std::string,             |
|         model: std::string,             |
|         basePrice: double,              |
|         serialNumber: std::string,      |
|         cpu: std::string,               |
|         ram: int)                       |
| +getCpu(): std::string                  |
| +setCpu(cpu: std::string)               |
| +getRam(): int                          |
| +setRam(ram: int)                       |
| +getPrice(): double                     |
| +calculatePrice(): double               |
| +operator std::string(): std::string    |
| +displayDetails(): void                 |
| +getCategory(): std::string             |
| +operator==(other: const Product&): bool|
+-----------------------------------------+
```

### Implementing the `Smartphone` Class

- The `Smartphone` class derived from the `Product` class to include attributes and behaviors specific to smartphones. This specialization introduces additional features like operating system, storage capacity, and battery capacity. Below are detailed instructions to guide you in implementing this class, along with a UML diagram to visualize its structure.

#### Implementation Instructions

1. **Constructor**: Your constructor should initialize the `Smartphone` attributes while calling the base `Product` constructor for common product attributes.

2. **Price Calculation**: Implement `calculatePrice` using the given formula to calculate the smartphone's price based on its base price, storage capacity, and battery capacity. This method demonstrates how different products can have unique pricing logic. Unique formula to calculate price ``` base price + (storageCapacity * 0.75) + (batteryCapacity * 0.05)```. It is a Hypothetical formula to calculate price.

3. **Type Conversion to String**: The `operator std::string()` provides a way to easily convert a `Smartphone` object into a string representation, useful for displaying the smartphone's details. Ensure the formatting matches the specified output closely. (**Check the sample output**)

4. **Equality Operator (`operator==`)**: This operator allows comparing two `Smartphone` objects based on common product attributes and smartphone-specific attributes (operatingSystem and storageCapacity). It showcases polymorphism in action by utilizing dynamic casting.

5. **Displaying Details**: `displayDetails` should print the smartphone's details to the console. It utilizes the `operator std::string()` for converting the object's state into a formatted string representation. (**Check the sample output**)

6. **Category Identification**: `getCategory` returns a string indicating the product's category, which in this case is `"Smartphone"`.

7. **Getters and Setters**: Implement getters and setters for the smartphone-specific attributes (`operatingSystem`, `storageCapacity`, `batteryCapacity`). These methods ensure external code can safely access and modify these attributes.


#### The `Smartphone` UML Diagram

```cpp
+--------------------------------------------------+
|               Smartphone                         |
+--------------------------------------------------+
| -operatingSystem: std::string                    |
| -storageCapacity: int                            |
| -batteryCapacity: int                            |
+--------------------------------------------------+
| +Smartphone(brand: std::string,                  |
|             model: std::string,                  |
|             basePrice: double,                   |
|             serialNumber: std::string,           |
|             operatingSystem: std::string,        |
|             storageCapacity: int,                |
|             batteryCapacity: int)                |
| +getPrice(): double                              |
| +calculatePrice(): double                        |
| +operator==(other: const Product&): bool         |
| +getCategory(): std::string                      |
| +displayDetails(): void                          |
| +operator std::string(): std::string             |
| +getOperatingSystem(): std::string               |
| +setOperatingSystem(operatingSystem: std::string)|
| +getStorageCapacity(): int                       |
| +setStorageCapacity(storageCapacity: int)        |
| +getBatteryCapacity(): int                       |
| +setBatteryCapacity(batteryCapacity: int)        |
+--------------------------------------------------+
```


### Implementing the `Inventory` Class

- The `Inventory` class is a template class designed to manage a collection of items, where each item is a pointer to a `Product` or a derived class of `Product`. This class includes functionalities to add and remove items, count items by category, calculate the total value of the inventory, and display inventory items by category.

#### Instructions for Implementation

1. **Dynamic Array Management**: The `items` array stores pointers to `Product` objects. Pay special attention to dynamically resizing this array as items are added, ensuring there's always enough capacity.

2. **Constructor and Destructor**:
   - The constructor initializes the `items` array with a starting capacity and sets the initial item count to 0.
		- A default constructor that initializes the capacity to 4 and the count to 0
   - The destructor is responsible for deallocating memory used by the `items` array. If the `Inventory` class owns the `Product` objects (i.e., it's responsible for their lifecycle), it should also delete each `Product` object pointed to by the array. You need to carefully manage the memory to avoid memory leaks

3. **Adding and Removing Items**:
   - Implement the `operator+` to add items to the inventory.
		- This function should check if the array is full, capacity is reached, and if so, it should resize the array. The array should be resized by doubling the capacity
   - Implement the `operator-` to remove items from the inventory based on pointer equality. This operation involves finding the item, removing it. There is no need to shrink/resize the array when removing a product.
		- It is important to carefully manage the memory when removing a product from the inventory to avoid memory leaks

4. **Other Functions**:
   - `countByCategory`: Counts and returns the number of items belonging to a specified category. which takes a string as a parameter and returns an integer. The category is a string with two possible values: `"Laptop"` and `"Smartphone"`.
   - `calculateTotalValue`: Calculates and returns the total value of all items in the inventory by summing up their prices.
   - `size`: Returns the current number of items in the inventory.
   - `displayInventoryByCategory`: Displays details of all items that belong to a specified category. This function should take a string as a parameter and display the details of the products in the inventory that have the category specified by the parameter. The category is a string with two possible values: `"Laptop"` and `"Smartphone"`. (**Check the sample output**)

#### The `Inventory` UML Diagram

```cpp
+----------------------------------------------------------+
|                     Inventory                            |
+----------------------------------------------------------+
| -items: T*                                               |
| -capacity: int                                           |
| -count: int                                              |
+----------------------------------------------------------+
| +Inventory()                                             |
| +~Inventory()                                            |
| +operator+(item: T): Inventory&                          |
| +operator-(itemToRemove: T): Inventory&                  |
| +countByCategory(category: std::string): int             |
| +calculateTotalValue(): double                           |
| +size(): int                                             |
| +displayInventoryByCategory(category: std::string): void |
+----------------------------------------------------------+
```

### Implementing Utility Functions

- The `processFile` template function and the `createProduct` function are integral parts of the Inventory Management System. They allow for the initialization of the inventory with data from files. Below are detailed instructions for implementing these functions.

#### `processFile` Template Function
**Objective**: Read product data from a specified file and add corresponding product objects to the inventory.

```cpp
template<typename T>
void processFile(Inventory<T>& inventory, const std::string& filePath, const std::string& category) {
// TODO: Add your implementation code here

}
```
1. **Open File**: Use `std::ifstream` to open the file specified by `filePath`. Handle the case where the file cannot be opened by printing an error message and returning early from the function.

2. **Read Line by Line**: Use `std::getline` in a loop to read the file line by line. Each line represents the data for one product.

3. **Create Product Objects**: For each line, call `createProduct` to create a `Product` object from the line data. Then, add the created product to the inventory.

4. **Error Handling**: If `createProduct` returns `nullptr` (indicating an error in product creation), print an error message including the problematic line. The message is **Failed to create product from line: [problematic line]**

5. **Close File**: Ensure the file is closed after processing.


##### File Structure Explanation `laptops_data.txt`
- The text file, `laptops_data.txt`, stores information about laptops in a structured format where each line represents a different laptop. 
- Each line in the file represents a laptop with various attributes (brand, model, price, serial number, CPU, and RAM), separated by commas. However, these attributes may be surrounded by leading and trailing white spaces that must be carefully removed to ensure correct parsing and processing of the data.
- It is essential to handle the data accurately and efficiently, especially considering the presence of extra white spaces.  
- The attributes for each laptop are separated by commas and include the following details:

	-  **Brand**: The manufacturer of the laptop (e.g., Dell, Apple, Lenovo).
	-  **Model**: The specific model of the laptop (e.g., XPS 15, MacBook Pro 16).
	-  **Base Price**: The starting price of the laptop in USD (e.g., 1500.00).
	-  **Serial Number**: A unique identifier for the laptop (e.g., SN200001).
	-  **CPU**: The central processing unit model used in the laptop (e.g., Intel Core i7, AMD Ryzen 9).
	-  **RAM (GB)**: The amount of RAM in gigabytes (e.g., 16, 32).


### File Structure Explanation `smartphones_data.txt`

- The text file, `smartphones_data.txt`, stores information about smartphones in a structured format where each line represents a different smartphone. 
- Each line in the file represents a smartphone with various attributes separated by commas. However, these attributes may be surrounded by leading and trailing white spaces that must be carefully removed to ensure correct parsing and processing of the data.
- It is essential to handle the data accurately and efficiently, especially considering the presence of extra white spaces.  
- The attributes of each smartphone are separated by commas and include the following details:
	- **Brand**: The manufacturer of the smartphone (e.g., Samsung, Apple, Google).
	- **Model**: The specific model of the smartphone (e.g., Galaxy S21, iPhone 12).
	-  **Price**: The retail price of the smartphone in USD (e.g., 999.99).
	-  **Serial Number**: A unique identifier for the smartphone (e.g., SN123456).
	-  **Operating System**: The operating system installed on the smartphone (e.g., Android, iOS).
	-  **Storage Capacity (GB)**: The internal storage capacity of the smartphone in gigabytes (e.g., 128).
	-  **Battery Capacity (mAh)**: The battery capacity of the smartphone in milliampere-hours (e.g., 4000).
  
  
#### `createProduct` Function

**Objective**: Create and return a `Product` object based on the category and data provided.

```cpp

Product* createProduct(const std::string& category, const std::string& data);

```

1. **Parse Data**: Split the input `data` string into attributes using a delimiter (e.g., comma). You might implement a helper function to facilitate this.

2. **Handle Categories**: Based on the `category` parameter, determine the type of product to create (`Smartphone` or `Laptop`). Use the parsed attributes to initialize the product object correctly.

3. **Data Conversion**: Convert string attributes to their appropriate types (e.g., `std::stod` for price, `std::stoi` for numeric attributes like storage capacity or RAM).

4. **Error Handling**: Wrap the conversion and object creation in a try-catch block to handle any exceptions. Return `nullptr` in case of errors.

5. **Return Product Object**: Return the newly created product object. If the category does not match or there is an incorrect attribute count, return `nullptr`.

 


### Implementing and Completing the `main` Function
- To successfully complete the implementation of the `main` function in your Inventory Management System, follow these detailed instructions corresponding to each TODO in the provided code skeleton. This will guide you through displaying inventory information, adding and removing products, and ensuring your program's output aligns with the assignment's requirements.

#### Display Inventory Information

1. **Calculate and Display Total Inventory Value**:
   - Use the `calculateTotalValue` method from the `Inventory` class to obtain the total value of all items in the inventory.
   - Display this value formatted to two decimal places. Consider using `std::fixed` and `std::setprecision(2)` with `std::cout` to achieve the desired format.

2. **Count and Display Number of Products by Category**:
   - Utilize the `countByCategory` method for both "Laptop" and "Smartphone" categories to get the count of each product type in the inventory.
   - Display these counts to the console.
#### Display Lists of Products

3. **Display Lists of Laptops and Smartphones**:
   - Call `displayInventoryByCategory` with "Laptop" to display all laptops in the inventory.
   - Repeat the process with "Smartphone" to display all smartphones.
   - Ensure the output format matches the sample output provided in the assignment instructions.   

#### Add New Products to Inventory

4. **Create and Add New Laptop and Smartphone**:
   - Create a new `Laptop` object and a new `Smartphone` object using the provided data strings. Make sure to correctly parse the strings and pass the values to the constructor of each class.
   - Add these new objects to the inventory.

5. **Recalculate and Display Updated Inventory Information**:
   - After adding the new products, recalculate the total inventory value and the counts of laptops and smartphones. Display these updated figures to reflect the changes made by adding the new products.

#### Remove Products from Inventory

6. **Remove a Laptop from Inventory**:
   - Create a `Laptop` object using the provided data strings.
   - Use the create object to remove this laptop from the inventory based on the equality operator defined in your `Laptop` class.

7. **Recalculate and Display Updated Inventory Information**:
   - After removing the laptop, update and display the total inventory value and the count of laptops. Display the updated list of laptops to confirm the removal.

8. **Remove a Smartphone from Inventory**:
   - Similarly, create a `Smartphone` object for removal using the provided data strings and then remove it from the inventory.

9. **Final Inventory Update and Display**:
   - Update and display the total inventory value and the count of smartphones after the removal. Also, display the updated list of smartphones to ensure the smartphone was successfully removed.
#### General Guidelines
- Regularly compare your program's output against the sample output provided to ensure conformity to expected results.
 


### Sample Output
- After completely implementing the  `a1main.cpp` and then run your program as a whole, testing it in a real-world scenario, and should run as follows (a sample run):
```
-----------------------------------------
Total inventory value: $31304.65
Number of laptops: 10
Number of smartphones: 10
-----------------------------------------
-----------------------------------------
Laptops in the inventory:
-----------------------------------------
| Dell       | XPS 15               |  1820.00 |   SN200001 |   Intel Core i7 |         16GB |
| Apple      | MacBook Pro 16       |  2719.00 |   SN200002 |    Apple M1 Pro |         16GB |
| Lenovo     | ThinkPad X1 Carbon   |  2120.00 |   SN200003 |   Intel Core i7 |         16GB |
| HP         | Spectre x360         |  1920.00 |   SN200004 |   Intel Core i7 |         16GB |
| Asus       | ROG Zephyrus G14     |  1770.00 |   SN200005 |     AMD Ryzen 9 |         16GB |
| Acer       | Swift 3              |   839.99 |   SN200006 |     AMD Ryzen 7 |          8GB |
| Microsoft  | Surface Laptop 4     |  1159.99 |   SN200007 |   Intel Core i5 |          8GB |
| Razer      | Blade 15             |  3240.00 |   SN200008 |   Intel Core i7 |         32GB |
| MSI        | GS66 Stealth         |  2840.00 |   SN200009 |   Intel Core i7 |         32GB |
| Samsung    | Galaxy Book Pro      |  1360.00 |   SN200010 |   Intel Core i5 |          8GB |
-----------------------------------------
Smartphones in the inventory:
-----------------------------------------
| Samsung    | Galaxy S21           |  1295.99 |   SN123456 |         Android |        128GB |       4000mAh|
| Apple      | iPhone 12            |  1431.75 |   SN789101 |             iOS |        256GB |       2815mAh|
| Google     | Pixel 5              |   999.99 |   SN112233 |         Android |        128GB |       4080mAh|
| OnePlus    | 9 Pro                |  1386.00 |   SN445566 |         Android |        256GB |       4500mAh|
| Xiaomi     | Mi 11                |  1075.99 |   SN778899 |         Android |        128GB |       4600mAh|
| Motorola   | Edge 20              |   845.99 |   SN998877 |         Android |        128GB |       5000mAh|
| Sony       | Xperia 5 II          |  1195.99 |   SN665544 |         Android |        128GB |       4000mAh|
| LG         | Velvet               |   910.99 |   SN332211 |         Android |        128GB |       4300mAh|
| Nokia      | 8.3 5G               |   970.99 |   SN556677 |         Android |        128GB |       4500mAh|
| Huawei     | P40 Pro              |  1401.99 |   SN224466 |         Android |        256GB |       4200mAh|
-----------------------------------------
-----------------------------------------
Total inventory value: $34370.64
Number of laptops: 11
Number of smartphones: 11
-----------------------------------------
-----------------------------------------
Total inventory value: $32250.64
Number of laptops: 10
-----------------------------------------
Laptops in the inventory:
-----------------------------------------
| Dell       | XPS 15               |  1820.00 |   SN200001 |   Intel Core i7 |         16GB |
| Apple      | MacBook Pro 16       |  2719.00 |   SN200002 |    Apple M1 Pro |         16GB |
| HP         | Spectre x360         |  1920.00 |   SN200004 |   Intel Core i7 |         16GB |
| Asus       | ROG Zephyrus G14     |  1770.00 |   SN200005 |     AMD Ryzen 9 |         16GB |
| Acer       | Swift 3              |   839.99 |   SN200006 |     AMD Ryzen 7 |          8GB |
| Microsoft  | Surface Laptop 4     |  1159.99 |   SN200007 |   Intel Core i5 |          8GB |
| Razer      | Blade 15             |  3240.00 |   SN200008 |   Intel Core i7 |         32GB |
| MSI        | GS66 Stealth         |  2840.00 |   SN200009 |   Intel Core i7 |         32GB |
| Samsung    | Galaxy Book Pro      |  1360.00 |   SN200010 |   Intel Core i5 |          8GB |
| Dell       | XPS 15               |  1820.00 | SN87654321 |   Intel Core i7 |         16GB |
-----------------------------------------
Total inventory value: $31250.65
Number of smartphones: 10
-----------------------------------------
Smartphones in the inventory:
-----------------------------------------
| Samsung    | Galaxy S21           |  1295.99 |   SN123456 |         Android |        128GB |       4000mAh|
| Apple      | iPhone 12            |  1431.75 |   SN789101 |             iOS |        256GB |       2815mAh|
| OnePlus    | 9 Pro                |  1386.00 |   SN445566 |         Android |        256GB |       4500mAh|
| Xiaomi     | Mi 11                |  1075.99 |   SN778899 |         Android |        128GB |       4600mAh|
| Motorola   | Edge 20              |   845.99 |   SN998877 |         Android |        128GB |       5000mAh|
| Sony       | Xperia 5 II          |  1195.99 |   SN665544 |         Android |        128GB |       4000mAh|
| LG         | Velvet               |   910.99 |   SN332211 |         Android |        128GB |       4300mAh|
| Nokia      | 8.3 5G               |   970.99 |   SN556677 |         Android |        128GB |       4500mAh|
| Huawei     | P40 Pro              |  1401.99 |   SN224466 |         Android |        256GB |       4200mAh|
| Samsung    | Galaxy S20           |  1245.99 | SN12345678 |         Android |        128GB |       3000mAh|
```

## Reflection

As part of enhancing your understanding of the concepts covered in this assignment, it's valuable to reflect on your approach and the techniques you used. This reflection will help solidify your learning and identify areas for further study.

Please study your assignment solution carefully and revisit the related sections in the course notes. Ensure you have a firm grasp of the concepts and techniques applied in this assignment. After this review, answer the following questions in the `reflection.md` file:

1. **Dynamic User Input for Product Addition**: In the provided setup, adding products to the inventory is predefined. How could you modify the program to allow users to dynamically add products, specifying their type (Laptop or Smartphone), attributes, and details at runtime? Consider the user interface and input validation aspects.

2. **Simplifying Product Type Variations**: The assignment differentiates products mainly by type (e.g., Laptop, Smartphone). If the system needed to handle different versions of the same product type (e.g., standard vs. premium laptops), what would be a simpler way to implement this without creating separate classes for each version?

3. **Optimizing Inventory Storage**: The current implementation stores products in a dynamically resized array. Could there be more efficient data structures for managing the inventory, especially considering operations like adding, removing, and searching for products? Discuss the potential benefits of using data structures like linked lists, vectors or maps.

4. **Implementing Persistence**: The current system initializes the inventory from text files and does not persistently save changes. How would you implement persistent storage for the inventory, ensuring that changes made during runtime (like adding or removing products) are saved and can be reloaded in future sessions? Discuss the advantages and challenges of using files, databases, or other storage mechanisms.

## Instructions for Testing and Running Your Code
To effectively test and run your code on the virtual machine using the command line, follow these steps:


#### Compilation and Execution:

1. **Navigate to the Correct Directory**: Ensure that you are in the directory containing your `Product.h`, `Product.cpp`, `Laptop.h`, `Laptop.cpp`, `Smartphone.h`, `Smartphone.cpp`, `Inventory.h`, `Utilities.h`, `Utilities.cpp`, `a1main.cpp` and `a1tester.cpp` files.

2. **Compile Your Code**:
   - Use the following command to compile your code:
     ```
     g++ -Wall -std=c++17 -g -o a1test Product.cpp Smartphone.cpp Laptop.cpp Utilities.cpp Inventory.h a1tester.cpp
     ```
   - The `-o a1test` part of the command specifies the name of the output file to be `a1test`.

3. **Run Your Program**:
   - After compiling, execute your program with:
     ```
     ./a1test
     ```

#### Important Notes:
- **Running the Tester**: While running `a1test`, the tester will automatically execute and check the functionality of your program. Pay attention to the output to ensure your code is working as expected.

- **Error-Free Execution**: Upon following these steps, there should be **no compilation errors** or **warnings**. If you encounter errors, carefully review your code and correct any issues. Remember that a successful compilation does not always mean your logic is correct, so always test your program thoroughly.

### Updating Your Repository with Completed Assignment Work

After successfully completing your assignment and ensuring that all tests pass, follow these steps to update the assignment directory in your repository:
#### 1. Verify Your Location in the Repository:
- If you are using the **Codespaces** virtual machine, make sure you are in the **root directory** of your repository. This is where your `.git` folder and other project files are located. 

```
/workspaces/a1?-a1-GroupX
```

#### 2. Stage Your Changes:
- Use the following command to stage all your changes for commit:
  ```
  git add .
  ```
- This command adds all the modified files in your current directory (and subdirectories) to the staging area, preparing them for a commit.
#### 3. Commit Your Changes:
- Commit your changes with an appropriate message. For instance:
  ```
  git commit -m "A1 Completed"
  ```
- This step records your changes in the repository's history. The message "A1 Completed" clearly indicates what this commit represents.

#### 4. Push Your Changes to GitHub:
- Finally, push your changes to your GitHub repository with:
  ```
  git push origin
  ```
- This command uploads your recent commit(s) to the remote repository on GitHub.


#### Important Note:
- **Ensuring Successful Update**: Executing these steps will commit and push the changes you made during the development of your code while using the virtual machine to your main GitHub repository. It is crucial to regularly **commit and push your changes to avoid losing any work and to keep your remote repository up to date with your local progress**.



## Assignment Submission Instructions
To successfully submit your assignment work and be eligible for grading, please follow these steps:
#### 1. **Test Your Program**:
   - Thoroughly test your program using the provided data. Ensure that the output of your program is consistent with the provided example.

#### 2. **Required Submissions**:
   - **`Product.h`**, **`Product.cpp`**, **`Laptop.h`**, **`Laptop.cpp`**, **`Smartphone.h`**, **`Smartphone.cpp`**, **`Inventory.h`**, **`Utilities.h`**, **`Utilities.cpp`**, **`a1main.cpp`**:   Complete and submit the files, where your implementations are located.
   - The **`reflection.md`** file: containing your answer to the lab questions.
   - **GitHub Commit**: Make sure all changes to `Product.h`, `Product.cpp`, `Laptop.h`, `Laptop.cpp`, `Smartphone.h`, `Smartphone.cpp`, `Inventory.h`, `Utilities.h`, `Utilities.cpp`, and `a1main.cpp` are successfully committed and pushed to the main branch of your repository in the assignment1 team folder.
   - **Passing Test Cases**: Your code must pass all the test cases in `a1tester.cpp` to be considered for grading.

#### 3. **Repository Location**:
   - Ensure your code is located in the main branch of your assigned GitHub repository, specifically in the assignment1 team folder folder.
   
#### 4. **Academic Integrity**:
   - **DO NOT** publish your solution in a public repository or share it with others. Doing so is a violation of academic integrity and may be considered cheating.   

#### 5. **Assignment completion is mandatory to pass the course**:





## Library Assignment Rubric

The assignment is worth 15% of your final grade and is marked out of 15 as follows:


| Criteria/Score            | Excellent (90-100%)                                                                                      | Good (70-89%)                                                                                   | Satisfactory (50-69%)                                                                                   | Needs Improvement (0-49%)                                                                 |
|---------------------------|----------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------|
| **Product Class (10%)**         | Fully implemented with all methods correctly functioning. Polymorphism and operator overloading are used effectively. | Mostly correct implementation with minor issues in functionality or incorrect use of C++ concepts. | Implementation is generally correct but lacks efficiency or proper use of polymorphism. | Significant issues in implementation; class does not function as required.                    |
| **Laptop Class(10%)**          | Fully implemented, extending `Product` with additional attributes and methods. Correct and efficient use of inheritance. | Correctly extends `Product` but has minor errors or inefficiencies. | Extension of `Product` is done but with notable issues in functionality or design.        | Fails to properly extend `Product` or has significant functionality issues.                   |
| **Smartphone Class(10%)**      | Fully and correctly implements all required functionality, effectively extends `Product`, and demonstrates an understanding of inheritance. | Mostly correct with minor errors or omissions in functionality or extension of `Product`.  | Functional but with significant errors or inefficiencies in extending `Product`.          | Incorrect implementation or failure to extend `Product` appropriately.                          |
| **Inventory Class (20%)**       | Template class is correctly implemented and manages a collection of `Product` pointers efficiently. Demonstrates effective use of dynamic arrays and memory management. | Generally correct but with minor issues in template usage or memory management.           | Implementation demonstrates understanding of templates but with inefficient memory management or errors. | Significant errors in implementation, inefficient memory use, or incorrect template usage.   |
| **Main Function (10%)**         | Demonstrates thorough understanding of assignment requirements, correctly initializes inventory, and performs all operations as specified. | Correct implementation with minor issues in logic or missing some specifications.        | Meets basic requirements but with noticeable logic errors or omissions.                    | Fails to meet the assignment specifications or contains significant errors.                  |
| **Utility Functions (10%)**     | Utility functions are correctly implemented, efficiently support main functionality, and demonstrate proper C++ practices. | Mostly correct with minor inefficiencies or incorrect practices.                           | Functions support the main functionality but are inefficient or poorly implemented.        | Incorrect implementation or significant errors that impact functionality.                    |
| **Reflection Answers (10%)**    | Provides insightful, comprehensive responses demonstrating deep understanding and critical thinking. | Responses are mostly complete with good understanding but lack depth in places.          | Responses meet basic requirements but show limited reflection or insight.                  | Responses are incomplete, off-topic, or demonstrate a lack of understanding.                |
| **Code Organization (10%)**     | Code is exceptionally well-organized, logically structured, and follows best practices for readability and maintainability. | Well-organized but with minor areas that could be improved for better readability.        | Code is organized in a logical manner but lacks consistency or clarity in places.          | Poor organization, making the code difficult to follow or maintain.                         |
| **Code Documentation (10%)**    | Comprehensive documentation, including clear comments and explanations of logic where necessary. Follows best practices consistently. | Good documentation with minor areas lacking clarity or detail.                            | Basic documentation provided but missing important details or explanations.                | Insufficient or missing documentation, making understanding the code challenging.           |








####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this assignment. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

