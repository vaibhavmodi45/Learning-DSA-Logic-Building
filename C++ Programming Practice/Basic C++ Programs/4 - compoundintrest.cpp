#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double p, r, n, t, a;  // Using double for precise calculations
    cout << "Enter the values for p, r, n, t : " << endl;
    cin >> p >> r >> n >> t;
    
    // Convert percentage to decimal
    r = r / 100.0;
    
    // Calculate compound interest using proper power operator
    a = p * pow(1 + r/n, n*t);
    
    // Calculate compound interest amount
    double cp = a - p;
    
    cout << fixed;  // For proper decimal formatting
    cout.precision(2);  // Show 2 decimal places
    cout << "The Compound Interest is = " << cp << endl;
    return 0;
}