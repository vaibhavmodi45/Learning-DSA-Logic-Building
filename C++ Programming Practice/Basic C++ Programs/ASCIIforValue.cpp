#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch; // Read a character from user input
    int asciiValue = (int)ch; // Convert char to int (ASCII value)
    
    cout << "The ASCII value of '" << ch << "' is: " << asciiValue << endl;
    
    return 0;
}