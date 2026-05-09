// Q1. A teacher wants to calculate the average marks of three students.
// Accept three numbers and compute their average.

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter marks of three students: ";
    cin >> a >> b >> c;
    double average = (a + b + c) / 3.0;
    cout << "Average marks = " << average << endl;
    return 0;
}
