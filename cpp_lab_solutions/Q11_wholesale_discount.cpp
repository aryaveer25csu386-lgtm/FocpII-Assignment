// Q11. A wholesale supplier applies 10% discount if the order > 1000 items.
// Compute total expenses and apply discount accordingly.

#include <iostream>
using namespace std;

int main() {
    int qty;
    double pricePerItem;
    cout << "Enter quantity ordered: ";
    cin >> qty;
    cout << "Enter price per item: ";
    cin >> pricePerItem;

    double total = qty * pricePerItem;

    if (qty > 1000) {
        double discount = 0.10 * total;
        total -= discount;
        cout << "Discount of 10% applied.\n";
        cout << "Discount Amount = " << discount << endl;
    } else {
        cout << "No discount applied (order <= 1000 items).\n";
    }

    cout << "Total Expenses = " << total << endl;
    return 0;
}
