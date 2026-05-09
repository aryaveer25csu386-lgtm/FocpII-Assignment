// Q26. The school report card system stores subject marks for each student.
// Accept marks in 5 subjects, compute total and percentage, and display result.

#include <iostream>
using namespace std;

int main() {
    double marks[5], total = 0;
    cout << "Enter marks in 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    double percentage = total / 5.0;

    cout << "\n--- Report Card ---\n";
    for (int i = 0; i < 5; i++)
        cout << "Subject " << i + 1 << " : " << marks[i] << endl;
    cout << "Total      : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    return 0;
}
