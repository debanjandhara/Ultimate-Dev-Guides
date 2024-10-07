# OOP Concepts

## 1. What is OOPs?

Object-Oriented Programming (OOP) is a programming style used in modern programming that revolves around **classes** and **objects**. It allows for the implementation of real-world entities such as **polymorphism**, **inheritance**, **encapsulation**, and **abstraction**.

The primary aim of OOP is to bind together the data and the functions that operate on that data, ensuring that no other part of the code can access this data except those specific functions.

Popular object-oriented programming languages include:

- C++
- Java
- Python
- PHP
- C#

---

## 2. What is a Class?

A class is a user-defined type that serves as a blueprint or template for creating objects. It contains **variables** (attributes), **methods** (member functions), and **constructors**.

### Example 1:

Consider the Class of Cars. While there may be many cars with different names and brands, they share common properties, like having 4 wheels, speed limits, and mileage range. In this case, **Car** is the class, and **wheels**, **speed limits**, and **mileage** are its properties.

### Example 2:

In a virtual zoo program, you might create an `Animal` class with attributes such as `name`, `species`, and `age`, as well as actions like `eat()`, `sleep()`, and `makeSound()`.

### Syntax to define a class:

```cpp
class class_name {
    // Properties / attributes / instance variables
    // Methods / member functions
};
```

class: The keyword used to create a class in C++.
class_name: The name of the class.
Class body: The class content is enclosed within curly braces {}.
After the closing curly brace, a semicolon ; is required.

## Components of a Class:

### Attributes:

Also known as properties, they are variables that contain class-specific data (e.g., numbers or more complex data structures).

### Methods:

Functions that define the behavior of a class. They allow interaction with attributes and can perform actions or return information.

### Constructor:

A constructor initializes the class object. It is executed when a new object is
