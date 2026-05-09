// Q30. A payroll system maintains employee salary records.
// Accept salary of 10 employees in an array, compute total and average salary.

#include <iostream>
using namespace std;

int main() {
    double salary[10], total = 0;
    cout << "Enter salaries of 10 employees:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }
    cout << "Total Salary   = " << total << endl;
    cout << "Average Salary = " << total / 10.0 << endl;
    return 0;
}
