#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number till we have to calculate the SUM = ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n ; i++ ) {
        sum += i; // sum = sum + i
    }
    cout << "sum of given n number's = " << sum;
    return 0;
}