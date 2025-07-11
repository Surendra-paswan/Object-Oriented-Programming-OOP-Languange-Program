#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"This is Base class."<<endl;
    }

};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"This is Derived class."<<endl;
    }
};

int main()
{
    Derived d;
    return 0;
}