#include <iostream>
using namespace std;
class Employee
{
public:
    Employee()
    {
        cout << "Default Constructor Invoked" << endl;
    }
};
int main()
{
    Employee e1; // creating an object of Employee
    Employee e2;
    return 0;
}

// Output:
//  Default Constructor Invoked
// Default Constructor Invoked

// C++ Parameterized Constructor
class Employee
{
public:
    int id;      // data member (also instance variable)
    string name; // data member(also instance variable)
    float salary;
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {
        cout << id << "  " << name << "  " << salary << endl;
    }
};
int main()
{
    Employee e1 = Employee(101, "Sonoo", 890000); // creating an object of Employee
    Employee e2 = Employee(102, "Nakul", 59000);
    e1.display();
    e2.display();
    return 0;
}

// copy constructor

class student
{
    int rno;
    string name;
    double fee;

public:
    // Parameterized constructor
    student(int, string, double);
    // Copy constructor
    student(student &t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "Copy Constructor Called" << endl;
    }
    // Function to display student details
    void display();
};

// Implementation of the parameterized constructor
student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

// Implementation of the display function
void student::display()
{
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main()
{
    // Create student object with parameterized constructor
    student s(1001, "Manjeet", 10000);
    s.display();

    // Create another student object using the copy
    // constructor
    student manjeet(s);
    manjeet.display();

    return 0;
}

// Constructor overloading:

class construct
{

public:
    float area;

    // Constructor with no parameters
    construct()
    {
        area = 0;
    }

    // Constructor with two parameters
    construct(int a, int b)
    {
        area = a * b;
    }

    void disp()
    {
        cout << area << endl;
    }
};

int main()
{
    // Constructor Overloading
    // with two different constructors
    // of class name
    construct o;
    construct o2(10, 20);

    o.disp();
    o2.disp();
    return 1;
}
// output: 0  200

// this pointer:

class Test
{
private:
    int x;

public:
    void setX(int x)
    {
        // The 'this' pointer is used to retrieve the object's x
        // hidden by the local variable 'x'
        this->x = x;
    }
    void print() { cout << "x = " << x << endl; }
};

int main()
{
    Test obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    return 0;
}