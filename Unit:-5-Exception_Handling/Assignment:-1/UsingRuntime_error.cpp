 #include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;
 
    try
    {
        if (b == 0)
        {
            throw runtime_error("Division by zero is not allowed");
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}