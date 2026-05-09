// Q23. A fireworks display system arranges sparks in butterfly style.
// Display a butterfly star pattern.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of butterfly (e.g. 5): ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int s = 1; s <= 2 * (n - i); s++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int s = 1; s <= 2 * (n - i); s++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}
