#include<iostream>
using namespace std;

int main() {
    int base, exp;
    cout << "Enter the base and power values for calculations = ";
    cin >> base >> exp;

    int power = 1;

    for(int i = 0; i < exp; i++) {
        power = power * base;
    }

    cout << "power of " << base << " is = " << power << endl;
    return 0;
}