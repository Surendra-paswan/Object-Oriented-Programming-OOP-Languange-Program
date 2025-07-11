#include <iostream>
using namespace std;

class Parent
{
public:
    void print()
    {
        cout << "Parent calss" << endl;
    }
};
class Child : public Parent
{
public:
    void print()
    {
        cout << "Child calss" << endl;
    }
};

int main()
{
    // Child c;
    // Parent* p = &c;
    // p->print();

    Parent p;
    Child* c =static_cast<Child*> (&p);
    c->print();

    return 0;
}