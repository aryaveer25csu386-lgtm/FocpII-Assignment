// Q25. A security system generates list of prime keys within given range.
// Display all prime numbers between two limits.

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int l, h;
    cout << "Enter lower limit: ";
    cin >> l;
    cout << "Enter upper limit: ";
    cin >> h;

    cout << "Prime numbers between " << l << " and " << h << ":\n";
    for (int i = l; i <= h; i++)
        if (isPrime(i)) cout << i << " ";
    cout << endl;

    return 0;
}
