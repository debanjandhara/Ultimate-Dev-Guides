// single Inheritance:

#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class show function" << endl;
    }
};

int main()
{
    Derived d;
    d.display(); // Calling base class function
    d.show();    // Calling derived class function
    return 0;
}

// multiple inheritance:

class Base1
{
public:
    void display()
    {
        cout << "Base1 class display function" << endl;
    }
};

class Base2
{
public:
    void show()
    {
        cout << "Base2 class show function" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void print()
    {
        cout << "Derived class print function" << endl;
    }
};

int main()
{
    Derived d;
    d.display(); // Calling function from Base1
    d.show();    // Calling function from Base2
    d.print();   // Calling function from Derived class
    return 0;
}

// multilevel inheritance

class Base
{
public:
    void display()
    {
        cout << "Base class display function" << endl;
    }
};

class Intermediate : public Base
{
public:
    void show()
    {
        cout << "Intermediate class show function" << endl;
    }
};

class Derived : public Intermediate
{
public:
    void print()
    {
        cout << "Derived class print function" << endl;
    }
};

int main()
{
    Derived d;
    d.display(); // Calling base class function
    d.show();    // Calling intermediate class function
    d.print();   // Calling derived class function
    return 0;
}

// hierarchical inheritance

class Base
{
public:
    void display()
    {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : public Base
{
public:
    void show()
    {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : public Base
{
public:
    void print()
    {
        cout << "Derived2 class print function" << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.display(); // Calling base class function
    d1.show();    // Calling derived1 class function

    Derived2 d2;
    d2.display(); // Calling base class function
    d2.print();   // Calling derived2 class function
    return 0;
}

// hybrid inheritance

class Base
{
public:
    void display()
    {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : public Base
{
public:
    void show()
    {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : public Base
{
public:
    void print()
    {
        cout << "Derived2 class print function" << endl;
    }
};

// Multiple inheritance
class Hybrid : public Derived1, public Derived2
{
public:
    void output()
    {
        cout << "Hybrid class output function" << endl;
    }
};

int main()
{
    Hybrid h;
    h.show();   // Calling Derived1 class function
    h.print();  // Calling Derived2 class function
    h.output(); // Calling Hybrid class function
    return 0;
}
