#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to check all the factors = ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}