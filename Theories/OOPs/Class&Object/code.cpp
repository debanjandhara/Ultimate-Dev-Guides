#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties/attributes
    string name;
    string dept;
    int salary;

    // methods/member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
};

int main()
{

    Teacher t1;
    t1.name = "abc";
    t1.dept = "CSE";
    t1.salary = 25000;
    cout << t1.name << t1.dept << t1.salary << endl; // generates an error-> all attributes are private member by default,access modifier required

    return 0;
}