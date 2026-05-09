// Q28. A data processing system classifies even and odd inputs separately.
// Store 5 elements in an array, compute sum of all even and sum of all odd numbers.

#include <iostream>
using namespace std;

int main() {
    int arr[5], evenSum = 0, oddSum = 0;
    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) evenSum += arr[i];
        else                  oddSum  += arr[i];
    }
    cout << "Sum of Even numbers = " << evenSum << endl;
    cout << "Sum of Odd  numbers = " << oddSum  << endl;
    return 0;
}
