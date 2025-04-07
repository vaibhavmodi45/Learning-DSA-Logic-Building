#include<iostream>
using namespace std;

// This program swaps two numbers using a temporary variable
int swapusingthird() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping, the numbers are: " << a << " and " << b << endl;
    return 0;
}

// This program swaps two numbers without using a temporary variable
int swapwithoutusingthird() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping, the numbers are: " << a << " and " << b << endl;
    return 0;
}

int main() {
    // swapusingthird();
    swapwithoutusingthird();
}