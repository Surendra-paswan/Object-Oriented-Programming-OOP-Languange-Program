#include<iostream>
using namespace std;

class Number
{
    private:
    int value;

    public:
    Number(int v)
    {
        value = v;
    }
    Number operator-()
    {
        return Number(-value);
    }
    void displayData()
    {
        cout << "Value is: " << value << endl;
    }
};
int main()
{
    Number obj1(3);
    Number obj2 = -obj1;
    
    cout <<"Origianl ";
    obj1.displayData();
     cout <<"Applying unary minus ";
    obj2.displayData();
    return 0;
}