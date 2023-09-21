#include<iostream>
using namespace std;

// Template function for swapping
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int numA = 30, numB = 50;

    cout << "Before swapping," << endl;
    cout << "Number A: " << numA << ", Number B: " << numB << endl;

    swapValues(numA, numB);

    cout << "After swapping," << endl;
    cout << "Number A: " << numA << ", Number B: " << numB << endl;

    return 0;
}
