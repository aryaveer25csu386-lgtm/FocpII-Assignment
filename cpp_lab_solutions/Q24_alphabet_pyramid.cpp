// Q24. A typing practice app displays the alphabets in pyramid form.
// Display:
// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (max 26): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << (char)('A' + j);
        cout << endl;
    }
    return 0;
}
