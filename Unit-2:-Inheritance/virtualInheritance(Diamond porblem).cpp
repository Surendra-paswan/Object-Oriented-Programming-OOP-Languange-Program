/* 
- Prevents multiple copies of a shared base class when using multiple inheritance—solving the "diamond problem"
-Virtual inheritance is a C++ technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes
syntax:
class A { … };

class B : public virtual A { … };
class C : public virtual A { … };
class D : public B, public C { … };   only one A subobject in D */

#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<< "A display." <<endl;
    }
};
class B: public A{};
class C: public A{};
class D: public A, public C
{
    public:
    D()
    {
    cout<<"D display." <<endl;
    }
};
int main()
{
    D obj;
    return 0;
}