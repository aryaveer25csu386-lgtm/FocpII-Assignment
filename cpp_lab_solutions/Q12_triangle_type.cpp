// Q12. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene.
// Check the triangle type based on its sides.

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equilateral Triangle.\n";
    else if (a == b || b == c || a == c)
        cout << "Isosceles Triangle.\n";
    else
        cout << "Scalene Triangle.\n";

    return 0;
}
