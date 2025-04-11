#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float division = float(a / b); // Cast to float for accurate division21
    int modulus = a % b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus: " << modulus << endl;
}