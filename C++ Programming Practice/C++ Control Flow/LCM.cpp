#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two Num's to find the LCM = ";
    cin >> a >> b;

    int maximum = (a > b) ? a : b;

    while (true) {
        if (maximum % a == 0 && maximum % b == 0) {
            cout << "LCM is = " << maximum << endl;
            break;
        }
        maximum++;
    }
    return 0;
}