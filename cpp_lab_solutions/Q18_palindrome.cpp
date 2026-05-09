// Q18. A String-matching tool validates if IDs are palindromes.
// Check whether a given ID/string is a palindrome.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string id;
    cout << "Enter an ID or string: ";
    cin >> id;

    string rev = id;
    reverse(rev.begin(), rev.end());

    if (id == rev)
        cout << "\"" << id << "\" IS a Palindrome.\n";
    else
        cout << "\"" << id << "\" is NOT a Palindrome.\n";

    return 0;
}
