// Q3. A weather app developer needs to provide both Celsius and Fahrenheit readings.
// Convert Fahrenheit to Celsius or vice versa.

#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp;
    cout << "Temperature Conversion\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter temperature: ";
    cin >> temp;
    if (choice == 1)
        cout << "Celsius = " << (temp - 32) * 5.0 / 9.0 << " C" << endl;
    else if (choice == 2)
        cout << "Fahrenheit = " << (temp * 9.0 / 5.0) + 32 << " F" << endl;
    else
        cout << "Invalid choice.\n";
    return 0;
}
