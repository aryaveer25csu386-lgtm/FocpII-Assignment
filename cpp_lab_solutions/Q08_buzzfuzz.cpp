// Q8. A monitoring system generates event IDs from 1 to N.
// Divisible by 3 -> "Buzz", by 5 -> "Fuzz", by both -> "Buzz Fuzz"

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << i << " -> Buzz Fuzz\n";
        else if (i % 3 == 0)
            cout << i << " -> Buzz\n";
        else if (i % 5 == 0)
            cout << i << " -> Fuzz\n";
        else
            cout << i << "\n";
    }
    return 0;
}
