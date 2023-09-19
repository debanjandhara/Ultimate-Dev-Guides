# 🚀 C++ Cheat Sheet - Roadmap  🚀

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
- Insertion and deletion O(1)

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

### 2. std::reverse
- Reverses the order of elements
- reverse(begin, end)

### 3. std::find
- Searches for an element in a range
- find(begin, end, value)

### 4. std::count
- Counts the occurrences of a value in a range
- count(begin, end, value)

### 5. std::accumulate
- Sums the elements in a range (requires <numeric>)
- accumulate(begin, end, initial_value)

### 6. std::max_element
- Finds the maximum element in a range
- max_element(begin, end)

### 7. std::min_element
- Finds the minimum element in a range
- min_element(begin, end)

### 8. std::binary_search
- Checks if a value exists in a sorted range
- binary_search(begin, end, value)

### 9. std::copy
- Copies elements from one range to another
- copy(begin, end, destination)

### 10. std::transform
- Applies a function to each element in a range
- transform(begin, end, destination, function)

## 📚 C++ Cheat Sheet - Miscellaneous

### 1. C++ Coding Standards
- Follow a consistent and readable coding style
- Use meaningful names for variables, functions, and classes
- Document your code with comments and explanations
- Avoid using global variables whenever possible

### 2. Memory Management
- Be cautious with manual memory management (new/delete)
- Prefer smart pointers for automatic memory management
- Use RAII (Resource Acquisition Is Initialization) principles

### 3. Exception Safety Guarantees
- Strong Guarantee: Operations either succeed or leave the program unchanged
- Basic Guarantee: Operations succeed or leave the object in a valid state
- No-Throw Guarantee: Operations never throw exceptions

### 4. Resource Management
- Use RAII for managing resources like files, locks, etc.
- Resource Allocation Is Initialization (RAII) ensures automatic cleanup

### 5. Unit Testing (e.g., Catch2, Google Test)
- Write tests to verify the correctness of your code
- Test edge cases and typical scenarios to ensure robustness

### 6. Debugging
- Use a debugger (e.g., GDB) to inspect the program state
- Output helpful debug messages to aid in identifying issues

### 7. C++ Style Guides
- Google C++ Style Guide
- LLVM Coding Standards
- Bjarne Stroustrup's C++ Style and Technique FAQ

### 8. Further Learning Resources
- C++ reference websites (cppreference, cplusplus)
- C++ books (The C++ Programming Language by Bjarne Stroustrup)
- Online C++ courses and tutorials (Coursera, Udemy, Pluralsight)

### 9. Compiler Flags and Optimizations
- -Wall: Enables most warning messages
- -Werror: Treats warnings as errors
- -O2: Enables optimization level 2 for better performance

## 📚 C++ Cheat Sheet - Advanced Topics (Continued)

### 1. C++ Standard Library Utility (Header: <utility>)
- std::pair: Stores a pair of values (e.g., std::pair<int, int>)
- std::make_pair: Creates a std::pair from two values
- std::swap: Swaps the values of two variables or containers

### 2. C++ Standard Library Function Objects (Header: <functional>)
- std::function: Represents a callable object (function or functor)
- std::bind: Binds arguments to a function or callable object
- std::placeholders: Placeholders used with std::bind

### 3. C++ Preprocessor Directives
- #define: Creates a macro
- #include: Includes a header file
- #ifdef, #ifndef, #else, #endif: Conditional compilation

### 4. Custom Iterators
- Create your own iterators to traverse custom data structures

### 5. C++ Standard Library Filesystem (C++17)
- #include <filesystem>
- std::filesystem::path: Represents a filesystem path
- std::filesystem::exists, std::filesystem::create_directory, etc.

## 📚 C++ Cheat Sheet - Multithreading and Concurrency (C++11 and beyond)

### 1. std::thread
- #include <thread>
- std::thread my_thread(function, args);
- my_thread.join(): Wait for the thread to finish
- my_thread.detach(): Let the thread run independently

### 2. std::mutex and std::lock_guard
- #include <mutex>
- std::mutex my_mutex;
- std::lock_guard<std::mutex> my_lock(my_mutex);
- Automatically releases the lock when the lock_guard goes out of scope

### 3. std::unique_lock
- Similar to std.lock_guard but with more flexibility
- Allows lock and unlock at different places in the code

### 4. std::condition_variable
- #include <condition_variable>
- std::condition_variable my_cv;
- my_cv.wait(lock): Wait for a condition to be met
- my_cv.notify_one() or my_cv.notify_all(): Notify waiting threads

### 5. std::atomic (C++11)
- #include <atomic>
- std::atomic<int> my_atomic_var;
-

 Atomic operations without the need for mutex

### 6. C++ Standard Library Thread-Local Storage (C++11)
- thread_local keyword
- Variables declared as thread_local are unique per thread

## 📚 C++ Cheat Sheet - Object-Oriented Programming (OOP) Design Patterns [Continued]

### 1. Creational Patterns
- Singleton: Ensure only one instance of a class exists
- Factory Method: Provides an interface for creating objects
- Abstract Factory: Creates families of related objects
- Builder: Constructs complex objects step by step
- Prototype: Clone objects instead of creating new ones

### 2. Structural Patterns
- Adapter: Match interfaces of different classes
- Decorator: Add new functionalities to objects dynamically
- Proxy: Acts as an intermediary between the client and real object
- Facade: Simplify complex systems by providing a unified interface
- Composite: Treats individual objects and compositions uniformly

### 3. Behavioral Patterns
- Observer: Maintain a list of dependents and notify them of changes
- Strategy: Define a family of algorithms and make them interchangeable
- Command: Encapsulate a request as an object, allowing undo/redo
- Template Method: Define the skeleton of an algorithm and let subclasses implement certain steps
- State: Allow an object to change its behavior when its internal state changes

### 4. Modern C++ Guidelines
- Prefer RAII (Resource Acquisition Is Initialization)
- Use const-correctness to prevent unintended modifications
- Minimize the use of raw pointers; use smart pointers
- Follow the Rule of Three/Five/Zero for resource management
- Use move semantics for efficient resource transfers

## 📚 C++ Cheat Sheet - More on Smart Pointers

### 1. std::shared_ptr
- Shared ownership smart pointer
- Multiple shared_ptr can share ownership of the same resource
- Resources are released when the last shared_ptr owning it is destroyed

### 2. std::weak_ptr
- Weak reference to an object owned by shared_ptr
- Doesn't affect the reference count
- Avoids circular reference problems between shared_ptr

### 3. std::enable_shared_from_this
- Interface to allow shared_ptr from *this in a member function
- Must inherit from std::enable_shared_from_this<T>

### 4. std::make_shared
- Create a shared_ptr using make_shared for better performance and exception safety
- std::make_shared<T>(args)

### 5. C++ Smart Pointers Summary
- Use std::unique_ptr when unique ownership is needed
- Use std::shared_ptr when shared ownership is required
- Use std::weak_ptr to break circular references
- Avoid using raw pointers when possible to improve safety and maintainability

### 6. C++ Concepts (C++20)
- Concepts are predicates that describe the requirements of a template argument
- Ensures that template parameters satisfy the required constraints
- Improves error messages and code readability

## 📚 C++ Cheat Sheet - C++23 Upcoming Features

### 1. Concepts Improvements
- Ranges-based Concepts
- Ad hoc Constraints with requires expression
- Constrained non-type template parameters

### 2. Pattern Matching (Like switch)
- Supports type patterns, variable binding, and guards
- Simplifies pattern-based conditional logic

### 3. Compile-Time Regular Expressions (CTRE)
- Regular expressions evaluated at compile-time
- Faster and more flexible than runtime regular expressions

### 4. Lambdas Improvements
- Lambdas in unevaluated contexts (e.g., type traits)
- Function-local typedefs inside lambdas

### 5. Co-Routines Enhancements
- Co-routine final suspend point
- Co-routine await and yield without co_await

### 6. More Standard Library Additions
- std::atomic_shared_ptr
- std::range and std::contiguous_range
- std::source_location
- std::simd

### 7. C++23 is a proposal, and features may change before final release. Stay updated!

## 📚 C++ Cheat Sheet - Best Practices (Continued)

### 1. Performance Considerations
- Minimize unnecessary memory allocations and deallocations
- Optimize hot code paths and avoid premature optimization
- Prefer move semantics for large data structures

### 2. Exception Handling
- Use exceptions for exceptional situations only, not for regular control flow
- Catch specific exception types, not just catch (...)

### 3. Coding Style and Readability
- Follow a consistent coding style and naming conventions
- Use meaningful names for variables, functions, and classes
- Avoid excessive use of macros and preprocessor directives

### 4. C++ Standard Library
- Utilize the powerful C++ Standard Library to avoid reinventing the wheel
- Be familiar with standard algorithms, containers, and utilities

### 5. Code Review and Testing
- Review code regularly to catch bugs and ensure quality
- Write unit tests and run them frequently to detect regressions

### 6. Continuous Learning
- Stay up-to-date with C++ features and best practices


- Attend conferences, read books, and participate in the C++ community

## 📚 C++ Cheat Sheet - Summary

This comprehensive C++ cheat sheet covers a wide range of topics, from basic syntax to advanced features, design patterns, best practices, and upcoming C++23 features. It's a valuable resource for both beginners and experienced C++ programmers.

Remember that C++ is a powerful and complex language, and mastering it takes time and practice. Continuously improve your skills, explore new features, and strive for clean and maintainable code. Happy coding!

Feel free to ask if you have any more questions or need further clarification on any C++ topic!
