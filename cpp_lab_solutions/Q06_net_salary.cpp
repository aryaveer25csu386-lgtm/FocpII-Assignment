// Q6. An HR system needs to calculate employees' net salaries, including a fixed 12% bonus.
// Accept number of employees and their basic salary. Compute bonus and net salary.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double basic;
        cout << "\nEnter basic salary of Employee " << i << ": ";
        cin >> basic;
        double bonus = 0.12 * basic;
        double netSalary = basic + bonus;
        cout << "Employee " << i << " -> Basic: " << basic
             << " | Bonus (12%): " << bonus
             << " | Net Salary: " << netSalary << endl;
    }
    return 0;
}
