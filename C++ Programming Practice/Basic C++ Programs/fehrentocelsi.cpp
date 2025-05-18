#include <iostream>
using namespace std;

int main(){
    int ft, ct;
    cout << "ENter temp in fehrenheit : ";
    cin >> ft;

    ct = (ft - 32) * 5/9;

    cout << "Temp in Celsius is = " << ct;

    return 0;
}