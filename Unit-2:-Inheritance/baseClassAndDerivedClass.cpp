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
{};

int main()
{
    Derived d;
    return 0;
}