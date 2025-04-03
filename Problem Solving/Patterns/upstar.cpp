#include<iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = n; i >= 1; i--) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for each column in the row
            cout << "* "; // Print star
        }
        cout << endl; // Move to the next line after each row
    }
}