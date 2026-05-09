// Q13. A mathematics tool computes the exact roots of a quadratic equation.
// Calculate the roots of a quadratic equation ax^2 + bx + c = 0.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    double disc = b * b - 4 * a * c;

    if (disc > 0) {
        double r1 = (-b + sqrt(disc)) / (2 * a);
        double r2 = (-b - sqrt(disc)) / (2 * a);
        cout << "Two distinct real roots:\n";
        cout << "r1 = " << r1 << endl;
        cout << "r2 = " << r2 << endl;
    } else if (disc == 0) {
        double r = -b / (2 * a);
        cout << "One real root (repeated):\n";
        cout << "r = " << r << endl;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-disc) / (2 * a);
        cout << "Complex (imaginary) roots:\n";
        cout << "r1 = " << realPart << " + " << imagPart << "i\n";
        cout << "r2 = " << realPart << " - " << imagPart << "i\n";
    }
    return 0;
}
