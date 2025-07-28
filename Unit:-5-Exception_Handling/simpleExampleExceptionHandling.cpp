#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter  number 1: ";
    cin >> a;
     cout << "Enter number 2:  ";
    cin >>b;

    try
    {
        if (b == 0)
        {
            throw "Division by zero is not allowed";
        }
        c = a / b;
        cout << "Result: " << c << endl;
    }
    catch (const char *e)
    {
        cout << "Exception occurred: " << e << endl;
    }

    
    return 0;
}