// Q39. Design a C++ program to generate Pascal's Triangle for a given number of rows.
// Use iterative logic with loops (no factorial-based solution).

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int s = 0; s < rows - i - 1; s++)
            cout << " ";

        int val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
