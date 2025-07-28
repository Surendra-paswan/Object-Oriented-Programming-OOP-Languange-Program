   /* Write a function that may throw different types of exceptions (e.g., int, double, string).
    In the main function, use a try-catch block with specific catch handlers and a catch-all handler.
    In one of the catch blocks, re-throw the exception and handle it at a higher level.*/
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void mayThrowException(int choice) {
    if (choice == 1) {
        throw 42;  // Throwing an integer
    }
    else if (choice == 2) {
        throw 3.14;  // Throwing a double
    }
    else if (choice == 3) {
        throw string("Hello, Exception!");  // Throwing a string
    }
}

int main() {
    try {
        try {
            mayThrowException(1);  // Change this value to test different exceptions
        }
        catch (int e) {
            cout << "Inner catch: Caught an integer exception: " << e << endl;
            cout << "Rethrowing the integer exception..." << endl;
            throw;  // Rethrow the caught exception
        }
        catch (double e) {
            cout << "Inner catch: Caught a double exception: " << e << endl;
        }
        catch (const string& e) {  // Using const reference for string
            cout << "Inner catch: Caught a string exception: " << e << endl;
        }
        catch (...) {
            cout << "Inner catch: Caught an unknown exception" << endl;
        }
    }
    catch (int e) {
        cout << "Outer catch: Handled rethrown integer exception: " << e << endl;
    }
    catch (...) {
        cout << "Outer catch: Caught unexpected exception" << endl;
    }

    cout << "Program Execution completed" << endl;
    return 0;
}