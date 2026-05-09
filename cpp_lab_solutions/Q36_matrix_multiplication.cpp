// Q36. A machine learning model multiplies matrices for neural network layers.
// Multiply two matrices of order m×n and p×q (if valid).

#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter order of Matrix A (m x n): ";
    cin >> m >> n;
    cout << "Enter order of Matrix B (p x q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible! (columns of A must equal rows of B)\n";
        return 1;
    }

    int A[10][10], B[10][10], C[10][10] = {};

    cout << "Enter Matrix A (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

    cout << "Enter Matrix B (" << p << "x" << q << "):\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "\nResultant Matrix (" << m << "x" << q << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            cout << C[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
