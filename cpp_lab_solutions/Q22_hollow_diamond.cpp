// Q22. A jewelry design tool generates hollow diamond outlines for patterns.
// Display a hollow diamond pattern of *.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter half-size of diamond (e.g. 5): ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int s = n - i; s > 0; s--) cout << " ";
        if (i == 1)
            cout << "*";
        else
            cout << "*" << string(2 * i - 3, ' ') << "*";
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = n - i; s > 0; s--) cout << " ";
        if (i == 1)
            cout << "*";
        else
            cout << "*" << string(2 * i - 3, ' ') << "*";
        cout << endl;
    }
    return 0;
}
