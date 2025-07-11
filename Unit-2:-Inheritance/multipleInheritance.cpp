#include<iostream>
using namespace std;

class Base1
{
    public:
    Base1()
    {
        cout << "Base1 class display" << endl;
    }
};

class Base2
{
    public:
     Base2()
    {
        cout << "Base2 class display" << endl;
    }
};
class Base3
{
    public:
     Base3()
    {
        cout << "Base3 class display" << endl;
    }
};
class Derived: public Base1, public Base2, public Base3
{
    public:
     Derived()
    {
        cout << "Derived class display" << endl;
    }
};

int main()
{
    Derived d;
    return 0;
}

