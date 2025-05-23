#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter values of a, b & c";
    cin >> a >> b >> c;

    // Finding the largest by comparing using
  	// relational operators with if-else
    if (a >= b) {
        if (a >= c)
            cout << a;
        else
            cout << c;
    }
    else {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }

    return 0;
}