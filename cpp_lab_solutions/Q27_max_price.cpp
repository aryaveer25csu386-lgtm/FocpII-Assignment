// Q27. A supermarket software maintains item price lists.
// Store the prices of 10 items in an array and display the maximum price.

#include <iostream>
using namespace std;

int main() {
    double prices[10];
    cout << "Enter prices of 10 items:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> prices[i];
    }

    double maxP = prices[0];
    for (int i = 1; i < 10; i++)
        if (prices[i] > maxP) maxP = prices[i];

    cout << "Maximum Price = " << maxP << endl;
    return 0;
}
