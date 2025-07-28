#include <iostream>
using namespace std;

template <typename T>



class Pair {
    // int first
    T first;
    // int second
    T second;
public:
    // int first, int second
    Pair(T first,T second){
        this->first=first;
        this->second;
    }

    T getFirst(){
        return first;
    }
    T getSecond() {
        return second;
    }
};
//
int main() {

    

    Pair<int> intPair(1,3);
    Pair<float> floatPair(1.2f,2.4f);
    cout<<intPair.getFirst()<<endl;

    cout<<floatPair.getFirst();

    return 0;
}