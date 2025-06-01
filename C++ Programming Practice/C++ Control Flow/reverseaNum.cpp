#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number to Reverse = ";
    cin >> n;

    int rev_num = 0;

    while (n > 0) {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }

    cout << "Reversed Number = " << rev_num << endl;
    return 0;
}