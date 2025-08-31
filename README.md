# Constructors-Overloading-in-Cpp
## Experiment No. 13  
**Name:** Varnika Maurya  
**PRN:** 24070123160  

This experiment demonstrates the concept of **constructor overloading** and **copy constructors** in C++.

---

##  Program 1: Constructor Overloading (Room Area Example)  

### Theory  
**Constructor overloading** allows multiple constructors with different parameter lists in the same class.  
Depending on the arguments passed, the appropriate constructor is invoked.  

In this program:  
- A **default constructor** initializes fixed dimensions.  
- A **parameterized constructor with two arguments** initializes both length and breadth.  
- A **parameterized constructor with one argument** initializes length, with a fixed breadth.  

### Algorithm  
1. Define a class `Room` with private members `length` and `breadth`.  
2. Define three constructors:  
   - Default (no arguments).  
   - Parameterized with two arguments.  
   - Parameterized with one argument.  
3. Define a method `calculateArea()` to return `length × breadth`.  
4. In `main()`, create three objects using different constructors.  
5. Display the area for each case.  

### Conclusion  
This program demonstrates **constructor overloading** where different constructors initialize objects in different ways depending on the number of arguments passed.

---

##  Program 2: Copy Constructor Example  

### Theory  
A **copy constructor** initializes an object by copying data from another object of the same class.  
This is useful when you want a new object with the same values as an existing object.  

Here, the class `fetch` contains three types of constructors:  
- Default constructor.  
- Parameterized constructor.  
- Copy constructor.  

### Algorithm  
1. Define a class `fetch` with a private integer member `num`.  
2. Create three constructors:  
   - Default (initializes `num = 3`).  
   - Parameterized (initializes `num = x`).  
   - Copy constructor (initializes `num` using another object).  
3. Create a method `disp()` to display the value of `num`.  
4. In `main()`, create objects using all three constructors.  
5. Call `disp()` to check the values stored.  

### Conclusion  
This program demonstrates the use of a **copy constructor** along with default and parameterized constructors.  
It shows how one object can be initialized with the values of another.

---

##  Program 3: Copy Constructor with Area Calculation  

### Theory  
The copy constructor can also be used in practical applications such as **replicating object values**.  
Here, the class `area` demonstrates:  
- A default constructor.  
- A parameterized constructor.  
- A copy constructor.  

The program calculates the area using the values initialized by different constructors.  

### Algorithm  
1. Define a class `area` with private members `len` and `bre`.  
2. Create three constructors:  
   - Default (assigns fixed values).  
   - Parameterized (takes length and breadth as arguments).  
   - Copy constructor (copies values from another object).  
3. Create a `disp()` function to calculate and display area (`len × bre`).  
4. In `main()`, create objects using all three constructors.  
5. Call `disp()` for each object.  

### Conclusion  
This program demonstrates how **copy constructors** help replicate object data accurately.  
It also reinforces the concept of constructor overloading by combining default, parameterized, and copy constructors in a single class.

---

##  Overall Conclusion  
Through these programs, we understand:  
- **Constructor overloading** allows different ways of initializing objects depending on arguments.  
- **Copy constructors** are useful for creating a new object as a copy of an existing object.  
- Practical use of constructors in **object initialization and area calculation** is demonstrated.  

This experiment strengthens the understanding of **constructors, overloading, and object copying in C++ OOP**.
