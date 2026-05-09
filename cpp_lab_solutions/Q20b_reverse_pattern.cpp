// Q20b. A board displays reverse seating layouts for events.
// Display:
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

#include <iostream>
using namespace std;

int main() {
    for (int r = 5; r >= 1; r--) {
        for (int c = 5; c >= 5 - r + 1; c--)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}
