#include<iostream>
using namespace std;

int main() {
    char operation;
    cout << "Enter an operation (+, -, *, /) = ";
    cin >> operation;
    int a, b;
    cout << "Enter two Number's a & b = ";
    cin >> a >> b;

    if(operation == '+') {
        cout << a+b;
    }
    else if(operation == '-') {
        cout << a-b;
    }
    else if(operation == '*') {
        cout << a*b;
    }
    else if(operation == '/') {
        cout << a/b;
    }
    else{
        cout << "Invalid Input";
    }
    return 0;
}