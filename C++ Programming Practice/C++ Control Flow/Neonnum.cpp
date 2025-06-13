// A neon number is a number where the sum of digits of the square of the number is equal to the number. The task is to check and print neon numbers in a range.

#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number ";
    cin >> a;

    int square = a * a;
    int neo = 0;

    while(square > 0) {
        neo += square % 10;
        square = square / 10;
    }

    if(neo == a) {
        cout << "It's Neon";
    }
    else {
        cout << "Not a Neon Number";
    }

    return 0;
}