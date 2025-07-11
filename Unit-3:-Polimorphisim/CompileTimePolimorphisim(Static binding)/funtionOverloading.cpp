// Funtion overloading refers to the multiple funtion same name  but different parameter of a class.
#include<iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print obj;
    obj.show(10);          // calls show(int)
    obj.show(10.5);        // calls show(double)
    obj.show("Hello");     // calls show(string)
    return 0;
}
