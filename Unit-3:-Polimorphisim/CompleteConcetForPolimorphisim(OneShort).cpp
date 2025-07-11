#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Base Display" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived Class Display" << endl;
    }
};

class Base1
{
public:
    virtual void display()
    {
        cout << "Base1 Display" << endl;
    }
};

class Derived1 : public Base1
{
public:
    void display() override
    {
        cout << "Derived1 Class Display" << endl;
    }
};
int main()
{
    // Derived d;
    // Base tempb = d;
    // tempb.display();

    // Derived1 d1;
    // Base1 tempb1 = d1;
    // tempb1.display();

    // Base* basetemp = new Derived();
    // basetemp->display();

    Base1* base1temp = new Derived1();
    base1temp->display();

    return 0;
}