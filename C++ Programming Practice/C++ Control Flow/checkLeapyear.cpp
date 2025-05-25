#include<iostream>
using namespace std;

int main() {
    int y;
    cout << "Enter a year to check if it's Leap or Not = ";
    cin >> y;

    if ( y % 4 == 0 || y % 400 == 0) {
        cout << "It's a Leap Year";
    }
    else {
        cout << "It's not a Leap Year";
    }

    return 0;
}