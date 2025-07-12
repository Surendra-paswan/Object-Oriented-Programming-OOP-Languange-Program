/* A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the method.
syntax:
class Base {
public:
    virtual ReturnType funcName(params) {
        // base implementation (optional)
    }
    virtual ~Base() {}  // recommended
};

class Derived : public Base {
public:
    ReturnType funcName(params) override {
        // derived behavior
    }
}; */

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks\n";
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks\n";
    }
};

int main() {
    Animal* a = new Dog();
    a->speak();  // prints "Dog barks"
    delete a;
    return 0;
}

