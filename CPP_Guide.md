# 🚀 C++ Cheat Sheet - Roadmap Repository 🚀

Welcome to the ultimate C++ cheat sheet! This repository contains comprehensive roadmaps and guides for mastering C++ and related topics in computer science and software development. Whether you're a beginner or an experienced developer, you'll find valuable information and resources to enhance your C++ skills.

## 📚 C++ Cheat Sheet - Basics

### 1. Basic Input/Output
```cpp
#include <iostream>
using namespace std;
cout << "Hello, World!" << endl;
cin >> variable;
```

### 2. Variables and Data Types
```cpp
int, float, double, char, bool
const int constant = 10;
```

### 3. Arithmetic Operators
```cpp
+ (addition), - (subtraction)
* (multiplication), / (division)
% (modulus)
```

### 4. Assignment Operators
```cpp
= (assignment), +=, -=
*=, /=, %=
```

### 5. Comparison Operators
```cpp
== (equal to), != (not equal to)
> (greater than), < (less than)
>= (greater than or equal to), <= (less than or equal to)
```

### 6. Logical Operators
```cpp
&& (logical AND), || (logical OR)
! (logical NOT)
```

### 7. Increment/Decrement Operators
```cpp
++ (increment), -- (decrement)
```

### 8. Type Conversion
```cpp
static_cast<new_type>(variable)
```

### 9. Conditional Operator (Ternary)
```cpp
(condition) ? true_expr : false_expr
```

### 10. Scope Operator
```cpp
::
```

## 📖 C++ Cheat Sheet - Control Structures

### 1. If-Else Statement
```cpp
if (condition) {
   // code to execute if condition is true
} else {
   // code to execute if condition is false
}
```

### 2. Nested If-Else
```cpp
if (condition1) {
   // code for condition1 true
} else if (condition2) {
   // code for condition2 true
} else {
   // code if all conditions are false
}
```

### 3. Switch Statement
```cpp
switch (variable) {
   case value1:
       // code for value1
       break;
   case value2:
       // code for value2
       break;
   // more cases...
   default:
       // code if no case matches
}
```

### 4. While Loop
```cpp
while (condition) {
   // loop body
}
```

### 5. Do-While Loop
```cpp
do {
   // loop body
} while (condition);
```

### 6. For Loop
```cpp
for (initialization; condition; update) {
   // loop body
}
```

### 7. Range-based For Loop (C++11)
```cpp
for (auto element : container) {
   // code to operate on each element
}
```

## 📝 C++ Cheat Sheet - Functions

### 1. Function Declaration and Definition
```cpp
return_type function_name(parameter1_type parameter1, parameter2_type parameter2) {
   // function body
}
```

### 2. Function Overloading
```cpp
void func(int a);
void func(int a, int b);
```

### 3. Default Arguments
```cpp
void func(int a, int b = 10);
```

### 4. Recursive Functions
```cpp
return_type recursive_function(parameters) {
   if (base_condition) {
       // base case
   } else {
       // recursive call
   }
}
```

### 5. Pass by Value and Pass by Reference
```cpp
void passByValue(int num);
void passByReference(int& num);
```

### 6. Inline Functions
```cpp
inline return_type function_name(parameters) {
   // function body
}
```

## 📚 C++ Cheat Sheet - Arrays and Pointers

### 1. Arrays
```cpp
data_type array_name[size];
int arr[5] = {1, 2, 3, 4, 5};
```

### 2. Multidimensional Arrays
```cpp
data_type array_name[row_size][column_size];
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

### 3. Pointers
```cpp
data_type* ptr_variable;
int* ptr = &variable;
```

### 4. Null Pointer and Void Pointer
```cpp
int* ptr = nullptr;
void* void_ptr = &variable;
```

### 5. Pointer Arithmetic
```cpp
ptr++; // Moves to the next element
```

### 6. Dynamic Memory Allocation
```cpp
data_type* ptr = new data_type;
delete ptr;
```

### 7. Function Pointers
```cpp
return_type (*func_ptr)(parameters) = &function_name;
```

## 📖 C++ Cheat Sheet - Strings and Standard Template Library (STL)

### 1. Strings
```cpp
#include <string>
string str = "Hello, World!";
string str2 = str.substr(start_pos, length);
```

### 2. String Operations
```cpp
str.length();
str.find(substring);
str.replace(start_pos, length, new_str);
```

### 3. Vectors (Dynamic Arrays)
```cpp
#include <vector>
vector<data_type> vec;
vec.push_back(element);
vec.size();
```

### 4. Lists, Stacks, and Queues
```cpp
#include <list>, <stack>, <queue>
```

### 5. Maps and Sets
```cpp
#include <map>, <set>
map<key_type, value_type> my_map;
set<data_type> my_set;
```

## 📚 C++ Cheat Sheet - File Handling and Exception Handling

### 1. File Input/Output
```cpp
#include <fstream>
ofstream outfile("filename.txt");
ifstream infile("filename.txt");
outfile << "Data to write";
infile >> variable;
```

### 2. Exception Handling
```cpp
try {
   // code that may throw an exception
} catch (exception_type& e) {
   // code to handle the exception
}
```

## 📖 C++ Cheat Sheet - Object-Oriented Programming (OOP)

### 1. Classes and Objects
```cpp
class MyClass {
private:
   int myVariable;
public:
   void setVariable(int value);
   int getVariable();
};
```

### 2. Member Function Definitions
```cpp
void MyClass::setVariable(int value) {
   myVariable = value;
}

int MyClass::getVariable() {
   return myVariable;
}
```

### 3. Constructors and Destructors
```cpp
class MyClass {
public:
   MyClass();          // Default constructor
   MyClass(int value); // Parameterized constructor
   ~MyClass();         // Destructor


};
```

### 4. Member Initialization List (C++11)
```cpp
MyClass::MyClass(int value) : myVariable(value) {
   // constructor body
}
```

### 5. Inheritance
```cpp
class DerivedClass : access_specifier BaseClass {
   // class body
};
```

### 6. Access Specifiers
- public: Accessible everywhere
- private: Accessible only within the class
- protected: Accessible within the class and derived classes

### 7. Function Overriding
```cpp
class BaseClass {
public:
   virtual void someFunction();
};

class DerivedClass : public BaseClass {
public:
   void someFunction() override;
}
```

### 8. Polymorphism
```cpp
BaseClass* ptr = new DerivedClass();
ptr->someFunction(); // Calls the derived class function
delete ptr;
```

### 9. Encapsulation (Using private member functions and data members)

### 10. Abstraction (Hiding implementation details)

### 11. Static Members
```cpp
class MyClass {
public:
   static int staticVariable;
   static void staticFunction();
}
```

## 📚 C++ Cheat Sheet - Advanced Topics

### 1. Templates
```cpp
template<typename T>
T maximum(T a, T b) {
   return (a > b) ? a : b;
}
```

### 2. Standard Template Library (STL) Algorithms
```cpp
#include <algorithm>
sort(begin, end);
find(begin, end, value);
for_each(begin, end, function);
```

### 3. Lambda Functions (C++11)
```cpp
auto lambda = [](int x) { return x * 2; };
int result = lambda(5); // Result: 10
```

### 4. Smart Pointers
- unique_ptr
- shared_ptr
- weak_ptr

### 5. Multithreading (C++11)
```cpp
#include <thread>
std::thread thread_name(function, args);
thread_name.join(); // Wait for the thread to finish
```

### 6. Regular Expressions
```cpp
#include <regex>
std::regex pattern("regex_pattern");
std::smatch match;
std::regex_search(str, match, pattern);
```

### 7. C++ Standard Library (iostream, cstring, etc.)
#include <iostream>, <cstring>, <ctime>, etc.

## 📖 C++ Cheat Sheet - Advanced Topics (Continued)

### 1. Exception Specifications (Deprecated in C++11)
```cpp
void myFunction() throw(exception_type);
```

### 2. Type Traits (C++11)
```cpp
#include <type_traits>
std::is_integral<type>::value; // Check if the type is integral
```

### 3. Rvalue References and Move Semantics (C++11)
```cpp
T&& rvalue_ref = std::move(lvalue);
```

### 4. User-Defined Literals (C++11)
```cpp
int operator"" _kg(long double weight) {
   return static_cast<int>(weight * 1000);
}
int weight = 5.5_kg; // 5500
```

### 5. constexpr (C++11)
```cpp
constexpr int factorial(int n) {
   return (n == 0) ? 1 : n * factorial(n - 1);
}
constexpr int result = factorial(5); // 120
```

### 6. Variadic Templates (C++11)
```cpp
template<typename... Args>
void print(Args... args) {
   ((std::cout << args << " "), ...);
}
print(1, "Hello", 3.14); // Output: 1 Hello 3.14
```

### 7. C++17 Features
- Structured Bindings
- if constexpr
- Inline Variables
- Filesystem Library
- Parallel STL Algorithms

### 8. C++20 Features
- Concepts
- Ranges
- Three-Way Comparisons (Spaceship Operator)
- Coroutines
- Modules
- Synchronized

### 9. C++23 Upcoming Features
- See the latest documentation for updates!

### 10. Best Practices
- Use const and constexpr where possible
- Prefer range-based for loops and algorithms from the STL
- Follow the Rule of Three/Five/Zero for resource management
- Minimize the use of raw pointers; use smart pointers
- Avoid using using namespace std in header files
- Keep functions short and well-named for readability
- Use const-correctness to prevent unintended modifications
- Prefer exceptions for error handling rather than error codes

## 📚 C++ Cheat Sheet - Standard Library Containers

### 1. std::vector
- Dynamic array
- push_back(), pop_back()
- Random access O(1)

### 2. std::list
- Doubly linked list
- push_back(), push_front(), pop_back(), pop_front()
- Insertion

 and deletion O(1)

### 3. std::deque
- Double-ended queue
- push_back(), push_front(), pop_back(), pop_front()
- Random access O(1)

### 4. std::set
- Sorted set of unique elements
- insert(), erase(), find()
- Search, insertion, and deletion O(log n)

### 5. std::map
- Sorted map of key-value pairs (unique keys)
- insert(), erase(), find()
- Search, insertion, and deletion O(log n)

### 6. std::unordered_set (C++11)
- Hash set of unique elements
- insert(), erase(), find()
- Search, insertion, and deletion O(1) average

### 7. std::unordered_map (C++11)
- Hash map of key-value pairs (unique keys)
- insert(), erase(), find()
- Search, insertion, and deletion O(1) average

### 8. std::stack
- LIFO (Last In, First Out) container
- push(), pop(), top()

### 9. std::queue
- FIFO (First In, First Out) container
- push(), pop(), front()

### 10. std::priority_queue
- Priority queue based on a binary heap
- push(), pop(), top()

## 📚 C++ Cheat Sheet - Standard Library Algorithms (Header: <algorithm>)

### 1. std::sort
- Sorts elements in ascending order (default)
- sort(begin, end)

### 2. std.
