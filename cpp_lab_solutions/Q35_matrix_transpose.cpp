// Q35. A data analytics tool flips rows and columns for better visualization.
// Store a 3x3 matrix and compute its transpose.

#include <iostream>
using namespace std;

int main() {
    int A[3][3];

    cout << "Enter Matrix (3x3):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }

    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << A[j][i] << "\t";
        cout << endl;
    }
    return 0;
}
