#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many fibonacci nums you want to print = ";
    cin >> n;
    int first = 0;
    int second = 1;

    for (int i = first; i <= n; i ++) {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    return 0;
}


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int first = 0;
//     int second = 1;

//     // Print Fibonacci numbers less than or equal to n
//     while (first <= n) {
//         cout << first << " ";
//         int next = first + second;
//         first = second;
//         second = next;
//     }
//     return 0;
// }