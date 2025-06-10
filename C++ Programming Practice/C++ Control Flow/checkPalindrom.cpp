#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to check palindrom = ";
    cin  >> n;1

    int ori_num = n;

    int rev_num = 0;
    while (n > 0) {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }

    if(ori_num == rev_num) {
        cout << "It's Palindrom Number" << endl;
    }
    else {
        cout << "Not a Palindrom Number" << endl;
    }

    return 0;
}