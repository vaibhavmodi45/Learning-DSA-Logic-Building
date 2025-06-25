#include<iostream>
using namespace std;

int main() {
    int base, exp;
    cout << "Enter the base and power values for calculations = ";
    cin >> base >> exp;

    if(exp == 0) {
        cout << "1";
    }

    for(int i=0; i < exp; i++ ) {
        int power = base * base;
        cout << "power of " << base << " is = " << power << endl;
    }
    return 0;
}