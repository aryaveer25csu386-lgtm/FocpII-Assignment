// Q20a. A printing press needs to repeat labels in a fixed tabular layout.
// Display:
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
    for (int r = 0; r < 3; r++) {
        for (int c = 1; c <= 5; c++)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}
