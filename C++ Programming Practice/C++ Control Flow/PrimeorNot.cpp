#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a Number = ";
    cin >> a;
    int cnt = 0;

    if( a <= 1 ){
        cout << "Not a Prime";
    }

    for(int i = 1; i <= a; i++) {
        if(a % i == 0) {
            cnt++;
        }
    }

    if( cnt > 2) {
        cout << "Not a Prime";
    }
    else {
        cout << "It's a Prime";
    }
    return 0;
}