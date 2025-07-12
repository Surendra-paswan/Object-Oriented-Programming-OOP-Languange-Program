/* An abstract class in C++ is a class that cannot be instantiated directly and serves as a blueprint for other classes. It must contain at least one pure virtual function.
class AbstractClass {
public:
    // Pure virtual function
    virtual void pureVirtualFunction() = 0; 

    // Other members (can be concrete or virtual)
    void concreteMethod() {
        // Implementation
    }
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
