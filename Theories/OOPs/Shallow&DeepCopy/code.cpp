// shallow copy

#include <iosream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double; // allocation of memory
        *cgpaPtr = cgpa;
    }

    // custom copy constructor
    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo()
    {
        cout << name << endl;
        cout << *cgpaPtr << endl;
    }
}

int
main()
{
    Student s1("Rahul Kumar", 8.9);
    s1.getInfo(); // Rahul Kumar 8.9
    Student s2(s1);
    s2.name = "Neha";
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo(); // Rahul Kumar 9.2   ??? bcz of shallow copy
    s2.getInfo(); // Neha 9.2
    return 0;
}

// deep copy

class Student
{
public:
    string name;
    double *cgpaPtr;
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double; // allocation of memory
        *cgpaPtr = cgpa;
    }

    // custom copy constructor
    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double; // again memory alloaction
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo()
    {
        cout << name << endl;
        cout << *cgpaPtr << endl;
    }
}

int
main()
{
    Student s1("Rahul Kumar", 8.9);
    s1.getInfo(); // Rahul Kumar 8.9
    Student s2(s1);
    s2.name = "Neha";
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo(); // Rahul Kumar 8.9
    s2.getInfo(); // Neha 9.2
    return 0;
}