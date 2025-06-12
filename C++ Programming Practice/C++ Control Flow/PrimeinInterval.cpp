#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter both the values of range = ";
    cin >> a >> b;

    for(int i = a; i <= b; i++){

        if( i <= 1 ) continue;

        int cnt = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                cnt++;
            }
        }

        if( cnt == 2) {
            cout << i << " ";
        }
    }
    return 0;
}