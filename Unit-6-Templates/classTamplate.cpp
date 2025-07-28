#include <iostream>
using namespace std;

template <class T>
class Box {
private:
    T value;

public:
    void setValue(T v) 
    {
        value = v;
    }
    T getValue() 
    {
        return value;
    }
};

int main() {
    Box<int> intBox;
    intBox.setValue(100);
    cout << "Integer Box: " << intBox.getValue() << endl;

    Box<string> strBox;
    strBox.setValue("Hello Templates");
    cout << "String Box: " << strBox.getValue() << endl;

    return 0;
}
