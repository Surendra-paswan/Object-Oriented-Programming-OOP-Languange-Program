
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
            throw runtime_error("Amount should be greater than 0");
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
            throw runtime_error("Amount should be greater than 0"); // using bad_alloc for demonstration
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
        c1.deposit(100);
        c1.withdraw(7000);
        c1.deposit(100);
    }
    catch (const runtime_error &e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
    catch (const bad_alloc &e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
    catch (...)
    {
        cout << "Exception occurred:" << endl;
    }
    return 0;
}