# Reflection
Study your assignment solution, reread the related parts of the course notes, and ensure you have understood the concepts covered by this assignment. Write your answer here to the assignment questions (Check the assignment instructions)

# SEP200 - Object-Oriented Programming - Assignment1



///////////////////////////////////////////////////////////////////////////
// File Name: reflection.md
// Group Number: Group 16
// Group Members Names : Mitkumar Patel , Dhruv Chotalia
// Group Members Seneca Email : mdpatel38@myseneca.ca , dchotalia@myseneca.ca
// Date : 2024-03-31
// Authenticity Declaration :
// I declare this submission is the result of our group work and has not been
// shared with any other groups/students or 3rd party content provider. This submitted
// piece of work is entirely of my own creation.
//////////////////////////////



Q1)	Dynamic User Input for Product Addition: In the provided setup, adding products to the inventory is predefined. How could you modify the program to allow users to dynamically add products, specifying their type (Laptop or Smartphone), attributes, and details at runtime? Consider the user interface and input validation aspects.

Ans)So, to make it easy for users to add products like laptops or smartphones, we can create a function called addProduct(). This function will ask users what type of product they want to add and then gather specific details like brand, model, price, etc., based on their choice. We'll also make sure the input is correct and fits the requirements, like checking if the price is a valid number. Once everything checks out, we'll create a new product with the provided info and add it to our inventory. After each addition, we'll let the user know if the product was added successfully or if there were any issues. This way, users can easily add products without worrying about complicated steps.


Q2)	Simplifying Product Type Variations: The assignment differentiates products mainly by type (e.g., Laptop, Smartphone). If the system needed to handle different versions of the same product type (e.g., standard vs. premium laptops), what would be a simpler way to implement this without creating separate classes for each version?

Ans)When dealing with different versions of a product like laptops, it's smart to simplify things to avoid repeating code and making updates tricky. One way to do this is through inheritance. Imagine we have a base class called "Laptop" that includes all the basic stuff laptops share, like size and weight. Then, we create subclasses like "StandardLaptop" and "PremiumLaptop" that build on this base, adding their unique features like better processors or fancier designs.

Another approach is using composition. Here, instead of making new classes for each laptop version, we have a single "Laptop" class. Inside, we include a separate object called "LaptopVersion" that holds the specific details for each version, like whether it's standard or premium. This keeps things tidy and flexible, making it easier to manage different versions without cluttering up the code.


Q3)	Optimizing Inventory Storage: The current implementation stores products in a dynamically resized array. Could there be more efficient data structures for managing the inventory, especially considering operations like adding, removing, and searching for products? Discuss the potential benefits of using data structures like linked lists, vectors or maps.

Ans)So, right now, we're using this setup where products are put into an array that can change size. It's okay for smaller collections, but as we get more products or do lots of adding and removing, it starts to slow down since shifting things around takes time. But, there are better ways! Like linked lists, where adding and removing stuff is really quick, but finding something takes longer since you might have to look through everything. Or there's vectors, which are good because adding and removing from the end is fast, but doing it in the middle takes time. Searching in vectors can be okay if it's sorted, but generally, it's a bit slower than linked lists. So, we've got options to tweak how we manage our inventory to make it work better for us.

Q4)	Implementing Persistence: The current system initializes the inventory from text files and does not persistently save changes. How would you implement persistent storage for the inventory, ensuring that changes made during runtime (like adding or removing products) are saved and can be reloaded in future sessions? Discuss the advantages and challenges of using files, databases, or other storage mechanisms.
Ans)To ensure changes to the inventory are saved and reloaded, we can update the + and - operators to write changes directly to a file. This simple approach guarantees persistence between sessions. File-based storage is straightforward and needs no extra setup. However, as the inventory grows, managing the file becomes more complex and searching for specific products less efficient.

Alternatively, using databases like SQLite or MySQL offers efficient data management and better handling of concurrent access. Yet, setting up a database adds complexity. We must manage connections, queries, and potential performance issues for larger inventories. The choice depends on factors like inventory size, update frequency, and performance needs. Regardless of the option, ensuring error handling, data validation, and backup mechanisms is crucial for reliability.
	





