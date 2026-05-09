// Q15. A data analytics tool finds the maximum sales figure from multiple entries.
// Accept 'n' numbers and display the largest.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter count (n): ";
    cin >> n;

    double num, maxVal;
    cout << "Enter " << n << " numbers:\n";
    cin >> maxVal;
    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > maxVal) maxVal = num;
    }

    cout << "Largest number = " << maxVal << endl;
    return 0;
}
