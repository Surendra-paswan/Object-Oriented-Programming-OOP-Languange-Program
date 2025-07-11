#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;      // Base class pointer
    Dog d;
    Cat c;

    a = &d;
    a->sound();     // Output: Dog barks (resolved at runtime)

    a = &c;
    a->sound();     // Output: Cat meows (resolved at runtime)

    return 0;
}
