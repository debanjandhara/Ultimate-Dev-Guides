#include <iostream>
using namespace std;

// class definition
class Circle
{
public: // access modifiers
    double radius;

    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};

// main function
int main()
{
    Circle obj;

    // accessing public data member outside class
    obj.radius = 5.5;

    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area();
    return 0;
}

// C++ program to demonstrate
//  private access modifier

class Circle
{
    // private data member
private:
    double radius;

    // public member function
public:
    void compute_area(double r)
    { // member function can access private
        // data member radius
        radius = r;

        double area = 3.14 * radius * radius;

        cout << "Radius is: " << radius << endl;
        cout << "Area is: " << area;
    }
};

// main function
int main()
{
    // creating object of the class
    Circle obj;
    obj.radius = 10.0 // error

                 // trying to access private data member
                 // directly outside the class
                 obj.compute_area(1.5);

    return 0;
}

// C++ program to demonstrate
// protected access modifier

// base class
class Parent
{
    // protected data members
protected:
    int id_protected;
};

// sub class or derived class from public base class
class Child : public Parent
{
public:
    void setId(int id)
    {

        // Child class is able to access the inherited
        // protected data members of base class

        id_protected = id;
    }

    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};

// main function
int main()
{

    Child obj1;

    // member function of the derived class can
    // access the protected data members of the base class

    obj1.setId(81);
    obj1.displayId();
    return 0;
}
