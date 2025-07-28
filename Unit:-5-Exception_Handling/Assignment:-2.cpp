/*   Create a custom exception class called InvalidAgeException.
    Write a program that asks the user for their age and throws an InvalidAgeException if the age is less than 0 or greater than 150
    Catch the exception and display a meaningful error message.*/

    #include<iostream>
    #include<stdexcept>
    using namespace std;

    class InvalidAgeException : public runtime_error
    {
    public:
        // The constructor passes a custom error message to the base class (runtime_error).
        // This allows you to specify a meaningful message when throwing the exception,
        // which can later be retrieved using e.what() in the catch block.
        InvalidAgeException(const string &message) : runtime_error(message) {}
    };

    int main()
    {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        try
        {
            if (age < 0 || age > 150)
            {
                throw InvalidAgeException("Invalid age. Age must be between 0 and 150.");
            }
            cout << "Your age is: " << age << endl;
        }
        catch (const InvalidAgeException &e)
        {
            cout << "Exception occurred: " << e.what() << endl;
        }

        return 0;
    }