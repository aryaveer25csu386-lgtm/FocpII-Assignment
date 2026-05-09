// Q10. A calendar app calculates whether February has 29 days.
// Check if a year is a leap year or not.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << year << " is a Leap Year.\n";
    else
        cout << year << " is NOT a Leap Year.\n";

    return 0;
}
