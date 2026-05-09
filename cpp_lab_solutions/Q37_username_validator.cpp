// Q37. A registration system rejects usernames that contain spaces or special characters.
// Validate whether a given string can be accepted as a username.
// Valid username: only letters, digits, and underscores allowed.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string username;
    cout << "Enter username: ";
    cin >> username;

    bool valid = true;
    for (char c : username) {
        if (!isalnum(c) && c != '_') {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "Username \"" << username << "\" is VALID.\n";
    else
        cout << "Username \"" << username << "\" is INVALID (only letters, digits, and _ are allowed).\n";

    return 0;
}
