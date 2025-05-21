#include<iostream>
using namespace std;

int main(){
    int p, r, t, si;
    cout << "Give values for p, r, t" << endl;
    cin >> p >> r >> t;

    si = p*r*t/100;

    cout << "The SI for given values is = " << si << endl;

    return 0;
}