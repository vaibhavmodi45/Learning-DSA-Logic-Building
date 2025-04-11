#include<iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 5.5;
    bool flag = true;
    char c = 'A';
    double d = 5.55555;

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(flag) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;

    return 0;
}