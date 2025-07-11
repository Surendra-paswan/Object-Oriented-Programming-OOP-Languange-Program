#include <iostream>
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

int main()
{
     Derived d;
     Base tempB = d;
     tempB.display();

     return 0;
}
