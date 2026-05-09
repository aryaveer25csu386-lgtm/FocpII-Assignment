// Q14. Develop a menu-driven calculator program to perform basic arithmetic operations.
// The program continues executing based on the user's choice.

#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 5) break;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1: cout << "Result = " << a + b << endl; break;
            case 2: cout << "Result = " << a - b << endl; break;
            case 3: cout << "Result = " << a * b << endl; break;
            case 4:
                if (b != 0)
                    cout << "Result = " << a / b << endl;
                else
                    cout << "Error: Division by zero!\n";
                break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    cout << "Exiting calculator.\n";
    return 0;
}
