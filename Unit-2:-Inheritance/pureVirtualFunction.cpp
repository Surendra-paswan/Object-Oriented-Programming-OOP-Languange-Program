/* A pure virtual function in C++ is a special type of virtual function that:
    1.Is declared with the syntax = 0 in the base class.
    2.Has no implementation in that base class (though it can technically have one).
    3.Makes its declaring class an abstract class, which means you cannot instantiate it directly.
    4.Forces any concrete derived class to override and provide an implementation — otherwise, it too remains abstract. 
    syntax:
    class Shape {
     public:
    virtual double area() = 0;  // Pure virtual function
    virtual ~Shape() {}         // Virtual destructor
        }; */
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual ➝ derived must implement
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!\n";
    }
};

int main() {
    // Animal a;          // ❌ Error! Animal is abstract.
    Animal* pet = new Dog(); // ✔️ OK: Dog implements makeSound()
    pet->makeSound();        // prints "Woof!"
    delete pet;
    return 0;
}
