// Assignment 3
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    int id;
    string name;

    try {
        // Input ID
        cout << "Enter your id: ";
        cin >> id;
        cin.ignore(); // Clear input buffer

        // Input name
        cout << "Enter your name: ";
        getline(cin, name);

        // Check for invalid ID
        if (id <= 0) {
            throw runtime_error("Please enter a positive ID");
        }

        // Check for empty name
        if (name.empty()) {
            throw runtime_error("Please enter a name");
        }

        // Successful input
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
    catch (const runtime_error& e) {
        cout << "Exception occured: " << e.what() << endl;
    }
    catch (...) {
        cout << "Exception occured: An unexpected error occurred" << endl;
    }

    cout << "Program Execution completed" << endl;
    return 0;

}




