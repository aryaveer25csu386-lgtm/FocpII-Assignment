// Q33. A grading system stores marks of multiple students in arrays.
// Accept marks in 5 subjects for 3 students, then display specific marks.

#include <iostream>
using namespace std;

int main() {
    int marks[3][5];
    for (int i = 0; i < 3; i++) {
        cout << "Enter marks for Student " << i + 1 << " (5 subjects):\n";
        for (int j = 0; j < 5; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    cout << "\nMarks of 1st student in 2nd subject = " << marks[0][1] << endl;
    cout << "Marks of 3rd student in 5th subject = " << marks[2][4] << endl;
    return 0;
}
