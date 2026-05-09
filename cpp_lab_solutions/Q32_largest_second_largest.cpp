// Q32. A stock market app tracks first and second highest stock values.
// Find the largest and second largest number in an array of size 5.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > first) {
            second = first;
            first  = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    cout << "Largest        = " << first  << endl;
    cout << "Second Largest = " << second << endl;
    return 0;
}
