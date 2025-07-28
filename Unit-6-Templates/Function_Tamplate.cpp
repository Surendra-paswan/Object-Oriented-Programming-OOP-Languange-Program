// Write a function template in C++ named findMax that takes two arguments of any data type and returns the maximum of the two. Demonstrate this function with integers, floats, and strings in main()
#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of integers: " << findMax(5, 3) << endl;
    cout << "Max of floats: " << findMax(5.5, 3.2) << endl;
    cout << "Max of strings: " << findMax(string("apple"), string("banana")) << endl;
    return 0;
}