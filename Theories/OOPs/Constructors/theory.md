# Constructor in C++

## What is a Constructor?

A **constructor** is a special method that is invoked automatically at the time of object creation. It is mainly used for initialization of object attributes.

### Key Points:

- The constructor has the **same name** as the class.
- A constructor **does not have a return type**.
- It is called **only once** automatically when an object is created.
- **Memory allocation** happens when the constructor is called.

---

## Syntax of Constructor:

### 1. Defining the Constructor Within the Class

```cpp
<class-name>(list-of-parameters) {
    // constructor definition
}
```

2.  Defining the Constructor Outside the Class
    <class-name> {

        // Declaring the constructor
        // Definiton will be provided outside
        <class-name>();

        // Defining remaining class

    }

<class-name>: :<class-name>(list-of-parameters) {
// constructor definition
}

### Types of Constructors in C++:

Constructors can be classified based on in which situations they are being used. There are 4 types of constructors in C++:

### Default Constructor:

No parameters. They are used to create an object with default values.

Syntax of Default Constructor

className() {
// body_of_constructor
}

### Parameterized Constructor:

Takes parameters. Used to create an object with specific initial values.

className (parameters...) {
// body
}

### Copy Constructor:

Takes a reference to another object of the same class. Used to create a copy of an object.

ClassName (ClassName &obj)
{
// body_containing_logic
}

### Move Constructor:

Takes an rvalue reference to another object. Transfers resources from a temporary object.

## Constructor Overloading:

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

## this pointer:

this is a special pointer in c++ that points to the current object
