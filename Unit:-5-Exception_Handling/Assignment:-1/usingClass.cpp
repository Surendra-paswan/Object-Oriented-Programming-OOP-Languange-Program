    // The program should not terminate unexpectedly if the user enters zero as the divisor.
    #include<iostream>
    using namespace std;

    class Division
    {
    public:
        static void divide(int a, int b)
        {
            if (b == 0)
            {
                throw runtime_error("Division by zero is not allowed");
            }
            cout << "Result: " << a / b << endl;
        }
    };

    int main()
    {
        int a, b;

        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        try
        {
            Division::divide(a, b);
        }
        catch (const runtime_error &e)
        {
            cout << "Exception occurred: " << e.what() << endl;
        }

        return 0;
    }
