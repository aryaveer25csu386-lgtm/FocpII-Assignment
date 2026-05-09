// Q17. A learning application analyzes numbers for mathematical properties.
// Check whether a given number is a Perfect number or an Armstrong number.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // --- Perfect Number Check ---
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) sum += i;

    if (sum == n)
        cout << n << " IS a Perfect Number.\n";
    else
        cout << n << " is NOT a Perfect Number.\n";

    // --- Armstrong Number Check ---
    int temp = n, digits = 0, armSum = 0;
    while (temp) { digits++; temp /= 10; }
    temp = n;
    while (temp) {
        int d = temp % 10;
        armSum += (int)pow(d, digits);
        temp /= 10;
    }

    if (armSum == n)
        cout << n << " IS an Armstrong Number.\n";
    else
        cout << n << " is NOT an Armstrong Number.\n";

    return 0;
}
