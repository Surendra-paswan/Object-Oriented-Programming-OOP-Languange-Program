// Write a class template Pair<T1, T2> that stores a pair of values of possibly different types. Include a method to display both values. Demonstrate the use of this class with combinations like Pair<int, double> and Pair<string, char>.
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(5, 3.14);
    p1.display();

    Pair<string, char> p2("Hello", 'A');
    p2.display();

    return 0;
}