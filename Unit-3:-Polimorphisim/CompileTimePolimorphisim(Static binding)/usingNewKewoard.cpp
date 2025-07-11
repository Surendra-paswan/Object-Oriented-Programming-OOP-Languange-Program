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

int main()
{
    Base *basetemp = new Derived();
    basetemp->display();

    return 0;
}
