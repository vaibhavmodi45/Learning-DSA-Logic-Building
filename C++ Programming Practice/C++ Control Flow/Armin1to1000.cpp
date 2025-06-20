#include<iostream>
using namespace std;

int main() {
    for (int i = 1; i < 1000; i++) {
        int temp = i;
        int p = 0;
        while (temp > 0) {
            int rem = temp % 10;
            p = p + (rem * rem * rem);
            temp = temp / 10;
        }
        if (i == p) {
            cout << "Armstrong Number's in Range are = "<< i  << endl;
        }
    }
    return 0;
}