#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to check if it's Even or Odd" << endl;
    cin >> n;

    // If n is completely divisible by 2
    if (n % 2 == 0)
        cout << "Even";

    // If n is NOT completely divisible by 2
    else
        cout << "Odd";
    return 0;
}