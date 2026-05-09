// Q16. A cybersecurity tool verifies prime numbers used in encryption keys.
// Accept a number and check whether it is prime.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 2) {
        cout << n << " is NOT a Prime number.\n";
        return 0;
    }

    bool prime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << n << " is a Prime number.\n";
    else
        cout << n << " is NOT a Prime number.\n";

    return 0;
}
