// Q40. A content-management system receives user-entered text that may contain
// inconsistent spacing, mixed letter cases, and invalid characters.
// Normalize and validate the input string.

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // --- Step 1: Count digits and special characters BEFORE normalization ---
    int digitCount = 0, specialCount = 0;
    for (char c : input) {
        if (isdigit(c))                        digitCount++;
        else if (!isalpha(c) && !isspace(c))   specialCount++;
    }

    // --- Step 2: Remove leading and trailing spaces ---
    int start = 0, end = (int)input.size() - 1;
    while (start <= end && isspace(input[start])) start++;
    while (end >= start && isspace(input[end]))   end--;
    input = input.substr(start, end - start + 1);

    // --- Step 3: Collapse extra spaces between words ---
    string normalized = "";
    bool prevSpace = false;
    for (char c : input) {
        if (isspace(c)) {
            if (!prevSpace) normalized += ' ';
            prevSpace = true;
        } else {
            normalized += c;
            prevSpace = false;
        }
    }

    // --- Step 4: Convert to sentence case ---
    if (!normalized.empty()) {
        normalized[0] = toupper(normalized[0]);
        for (int i = 1; i < (int)normalized.size(); i++)
            normalized[i] = tolower(normalized[i]);
    }

    // --- Step 5: Count words ---
    int wordCount = 0;
    istringstream ss(normalized);
    string word;
    while (ss >> word) wordCount++;

    // --- Step 6: Display results ---
    cout << "\nNormalized String : \"" << normalized << "\"\n";
    cout << "Total Words       : " << wordCount   << endl;
    cout << "Total Digits      : " << digitCount  << endl;
    cout << "Total Special Chars: " << specialCount << endl;

    // --- Step 7: Validate final string (only alphabets, digits, spaces) ---
    bool isValid = true;
    for (char c : normalized) {
        if (!isalpha(c) && !isdigit(c) && !isspace(c)) {
            isValid = false;
            break;
        }
    }

    if (isValid)
        cout << "Validation: VALID - String contains only alphabets, digits, and spaces.\n";
    else
        cout << "Validation: INVALID - String contains special characters.\n";

    return 0;
}
