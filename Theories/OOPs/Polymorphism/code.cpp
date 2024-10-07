// function overloading

#include <iostream>
using namespace std;

class Calculator
{
public:
    // Overloaded function for adding two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Overloaded function for adding three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Overloaded function for adding two double values
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;
    cout << "Addition of two integers: " << calc.add(5, 10) << endl;
    cout << "Addition of three integers: " << calc.add(5, 10, 15) << endl;
    cout << "Addition of two doubles: " << calc.add(5.5, 10.5) << endl;
    return 0;
}

// Operator Overloading

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void display()
    {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

int main()
{
    Complex c1(3.0, 4.0), c2(1.5, 2.5);
    Complex c3 = c1 + c2; // Using the overloaded + operator
    cout << "After adding: ";
    c3.display();
    return 0;
}

// method overriding

class Animal
{
public:
    string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal
{
public:
    string color = "Grey";
};

// Driver code
int main()
{
    Animal d = Dog(); // accessing the field by reference
                      // variable which refers to derived
    cout << d.color;  // output: grey
}