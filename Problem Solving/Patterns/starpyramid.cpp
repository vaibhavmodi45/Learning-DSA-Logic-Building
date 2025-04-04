#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n - i; j++) {  // Print spaces
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {  // Print stars
            cout << "*";
        }
        cout << endl;  // Move to the next line
    }

    return 0;
}