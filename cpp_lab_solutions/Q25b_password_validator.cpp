// Q25b. A web-based application enforces strong password policies during user registration.
// Password must have: uppercase, lowercase, digit, and special character (@#$%!&*)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string pwd;
    cout << "Enter password: ";
    cin >> pwd;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "@#$%!&*";

    for (char c : pwd) {
        if (isupper(c))                              hasUpper   = true;
        else if (islower(c))                         hasLower   = true;
        else if (isdigit(c))                         hasDigit   = true;
        else if (specialChars.find(c) != string::npos) hasSpecial = true;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        cout << "Strong password! All conditions met.\n";
    else {
        cout << "Weak password. Missing:\n";
        if (!hasUpper)   cout << "  - At least one uppercase letter (A-Z)\n";
        if (!hasLower)   cout << "  - At least one lowercase letter (a-z)\n";
        if (!hasDigit)   cout << "  - At least one digit (0-9)\n";
        if (!hasSpecial) cout << "  - At least one special character (@#$%!&*)\n";
    }
    return 0;
}
