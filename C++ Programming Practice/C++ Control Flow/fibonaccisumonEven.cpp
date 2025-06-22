#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many fibonacci nums you want to print = ";
    cin >> n;
    int range = n * 2;
    int first = 0;
    int second = 1;
    int next;
    int sum = 0;

    for (int i = first; i < range; i++) {
        next = first + second;
        first = second;
        second = next;
        if(i%2 == 0 ){
            sum = sum + next;
        }
    }
    cout << sum;
    return 0;
}