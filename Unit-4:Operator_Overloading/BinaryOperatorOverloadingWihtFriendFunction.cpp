#include <iostream>
#include <string>
using namespace std;

class Complex
{
    public:
    int real, imag;

    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
 // Allow a non-member function to access private members
    friend Complex operator+(Complex& c1, Complex& c2);

    void displayData()
    {
        cout << real;
        cout << "+";
        cout << imag;
        cout << "i";
        cout << endl;
        // cout << to_string(real)+ "+" + to_string(imag)+ "i"<<endl;
    }
};
Complex operator+(Complex& c1, Complex& c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    Complex obj1(1,3);
    Complex obj2(2,3);
    Complex obj3 = obj1 + obj2;
    cout << "The sum of two Complex number is:" << endl;
    obj3.displayData();
    return 0;
}

