#include <iostream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        int *p = new int[100000000000000];
        cout << "Memory allocated successfully" << endl;
        delete[] p; // Free the allocated memory
    }
    catch (const exception &e)
    {
        cout << "Exception occurred due to line 9: " << e.what() << endl;
    }

    return 0;
}
    