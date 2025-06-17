// In this we'll write up to get armstong.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number = ";
    cin >> n;
    int temp = n;
    int p = 0;

    while (n > 0) {
        int rem = n % 10;
        p = (p) + (rem * rem * rem);
        n = n / 10;
    }
    
    if ( temp == p ) {
        cout << " Yes it's an Armstong Number." << endl;
    }
    else {
        cout << "Not an Armstong";
    }
    
    return 0;
}