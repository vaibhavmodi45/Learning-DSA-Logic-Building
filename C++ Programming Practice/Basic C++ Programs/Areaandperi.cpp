#include<iostream>
using namespace std;


int getarea(int r){
    return 3.14 * r * r;
}

int getPeri(int r) {
    return 2 * 3.14 * r;
}

int main() {
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    int area = getarea(r);
    int peri = getPeri(r);

    cout << "Area of the circle: " << area << endl;
    cout << "Perimeter of the circle: " << peri << endl;

    return 0;
}