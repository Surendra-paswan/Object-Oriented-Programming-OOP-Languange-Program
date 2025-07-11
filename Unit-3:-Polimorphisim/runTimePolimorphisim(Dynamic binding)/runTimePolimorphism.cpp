/* Runtime Polymorphism occurs when a function call is resolved at runtime, not at compile time. This is achieved using:
Inheritance
Virtual functions
Base class pointers or references */

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base
{
public:
    void display() override
    {
        cout << "Derived class display" << endl;
    }
};

int main()
{
    Derived d;
    Base *tempB;
    tempB = &d;
    tempB->display();

    return 0;
}
