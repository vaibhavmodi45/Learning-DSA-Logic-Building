#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter both the values of range";
    cin >> a >> b;
    int cnt = 0;

    for(int i = a; i <= b; i++){

        if( a <= 1 ){
            cout << "Not a Prime";
        }

        for(int j = 1; j <= i; j++) {
            if(a % j == 0) {
                cnt++;
            }
        }

        if( cnt > 2) {
            for
        }
        else {
            cout << "It's a Prime";
        }
    }
    return 0;
}