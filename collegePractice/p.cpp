#include <iostream>
#include <stdexcept>
using namespace std;

class Voter
{
private:
    string name;
    int age;

public:
    Voter(const string &name, int age)
    {
        this->name = name;
        this->age = age;

        if (age < 18 || age > 120)
        {
            throw invalid_argument("Age must be between 18 and 120 for voting eligibility.");
        }
    }

    void display() const
    {
        cout << "Voter: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    try
    {
        Voter voter1("Surendra", 25);
        voter1.display();

        Voter voter2("Shyam", 16); // This will throw
        voter2.display();        // This will not execute
    }
    catch (const invalid_argument &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    try
    {
        Voter voter3("Ram", 150); // This will throw
        voter3.display();
    }
    catch (const invalid_argument &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
