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