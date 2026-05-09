// Q29. A weather monitoring app records 30-day temperature logs.
// Store daily temperatures in an array and display the minimum temperature for the month.

#include <iostream>
using namespace std;

int main() {
    double temp[30];
    cout << "Enter temperatures for 30 days:\n";
    for (int i = 0; i < 30; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> temp[i];
    }

    double minTemp = temp[0];
    for (int i = 1; i < 30; i++)
        if (temp[i] < minTemp) minTemp = temp[i];

    cout << "Minimum Temperature for the month = " << minTemp << endl;
    return 0;
}
