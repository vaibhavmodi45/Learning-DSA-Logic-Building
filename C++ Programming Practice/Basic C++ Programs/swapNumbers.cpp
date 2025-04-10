#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout << "Enter Values of a and b: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
// This program swaps two numbers using a temporary variable. It first takes input for the two numbers, then swaps them using a temporary variable, and finally prints the swapped values.