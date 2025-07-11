/* 1.new Operator
      Allocates memory on the heap for a variable or object.
       Returns the address of the allocated memory.

Syntax:
pointer = new data_type;

Example:

int* p = new int;  // allocates memory for one integer
*p = 10;
cout << *p;        // output: 10

2. delete Operator
   Deallocates memory previously allocated by new.
   Frees the memory to avoid memory leaks.

Syntax:
delete pointer;

Example:
delete p;  // deallocates the memory

Example: Using new and delete with Arrays */
#include <iostream>
using namespace std;

int main()
{
    // Allocate memory for an array of 5 integers
    int *arr = new int[5];

    // Assign values to the array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    // Print the array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Deallocate the memory
    delete[] arr;

    return 0;
}

/* Why use new and delete ?
To allocate memory dynamically when the size is not known at compile time.
Useful in data structures like linked lists, trees, etc.
Helps manage memory manually in C++ (unlike garbage-collected languages). */