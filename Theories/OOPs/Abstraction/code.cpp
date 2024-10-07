#include <iostream>
#include <string>
using namespace std;

class Shape
{                            // abstract class
    virtual void draw() = 0; // pure virtual function
};
class circle : public Shape
{
public:
    void draw()
    {
        cout << "draw a circle" << endl;
    }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}