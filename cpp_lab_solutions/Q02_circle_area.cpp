// Q2. An architect wants to calculate the space covered by a circular fountain.
// Compute the area of a circle.

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double r;
    cout << "Enter radius of circle: ";
    cin >> r;
    double area = PI * r * r;
    cout << "Area of Circle = " << area << endl;
    return 0;
}
