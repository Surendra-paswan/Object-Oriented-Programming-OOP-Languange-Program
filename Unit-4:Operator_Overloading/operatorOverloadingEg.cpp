#include<iostream>
#include<string>
using namespace std;

class Complex
{
    public:
    int real , imag;

    void setData(int real=0 , int imag=0)
    {
        this->real = real;
        this->imag = imag;
    }
   Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imag = this->imag + c.imag;
        return temp;
    }
    void displayData()
    {
        cout << real;
        cout << "+";
        cout << imag;
        cout << "i";
        cout<<endl;
        // cout << to_string(real)+ "+" + to_string(imag)+ "i"<<endl;
    }
};
int main()
{
    Complex obj1;
    obj1.setData(1,3);
    Complex obj2;
    obj2.setData(2,2);
    Complex obj3;
    obj3 = obj1 + obj2;
    cout<<"The sum of two Complex number is:" << endl;
    obj3.displayData();
    return 0;

}
 