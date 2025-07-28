
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
        if (amount > 0)
        {
            balance += amount;
            cout << balance << " rs is deposit successfully" << endl;
        }
        else 
        {
            cout << "Amount should be greater than 0" << endl;
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
            cout << "Amount should be greater than 0" << endl;
        }
        else
        {
            cout << "your balance is low so you cant withdraw " << endl;
        }
    }
};
int main()
{
    Customer c1("surendra", 5000, 12345);
    c1.deposit(100);
    c1.withdraw(7000);
    return 0;
}