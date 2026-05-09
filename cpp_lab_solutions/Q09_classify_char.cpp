// Q9. A text editor auto-detects whether an input letter is a vowel, consonant, or number.
// Classify the input symbol.

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isdigit(ch))
        cout << "'" << ch << "' is a Digit.\n";
    else if (isalpha(ch)) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            cout << "'" << ch << "' is a Vowel.\n";
        else
            cout << "'" << ch << "' is a Consonant.\n";
    } else {
        cout << "'" << ch << "' is a Special Character.\n";
    }
    return 0;
}
