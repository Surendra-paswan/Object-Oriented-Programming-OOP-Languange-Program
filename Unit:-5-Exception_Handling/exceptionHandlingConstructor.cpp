/*In C++, exceptions are unexpected problems or errors that occur while a program is running. For example, in a program that divides two numbers, dividing a number by 0 is an exception as it may lead to undefined errors.

The process of dealing with exceptions is known as exception handling. It allows programmers to make the program ready for any errors that may happen during execution and handle them gracefully so that it keeps running without errors.

1. try : The try keyword  represents a block of code that may throw an exception placed inside a try block. It's followed by one or more catch blocks. if an exception occurs , try block throws that exceptionl.

2. catch : The catch statement is used to handle the exception thrown by the try block. It catches the exception and allows the programmer to define how to handle it.

3. throw : The throw keyword is used to throw an exception. It can be used to throw a predefined exception or a user-defined exception.

*/

#include <iostream>
using namespace std;

class Customer
{
public:
    string name;
    int balance, account_number;

    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }
    // Deposite money
    void deposit(int amount)
    {
        if (amount <= 0)
        {
            throw "Amount should be greater than 0";
        }
        else
        {
            balance += amount;
            cout << balance << " rs is deposit successfully" << endl;
        }
    }
    // Withdraw money
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << balance << " rs is withdraw successfully " << endl;
        }
        else if (amount < 0)
        {
            throw "Amount should be greater than 0";
        }
        else
        {
            throw "your balance is low so you cant withdraw ";
        }
    }
};
int main()
{
    Customer c1("surendra", 5000, 12345);
    try
    {
        c1.deposit(22);
        c1.withdraw(7000);
    }
    catch (const char *e)
    {
        cout << "Exception occurred: " << e << endl;
    }
    return 0;
}