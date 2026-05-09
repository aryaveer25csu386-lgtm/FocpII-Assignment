// Q4. A shopkeeper wants to calculate the total bill amount after applying a 20% discount.
// Accept item no., quantity, and unit price. Compute amount and apply 20% discount.

#include <iostream>
using namespace std;

int main() {
    int itemNo;
    double qty, unitPrice;
    cout << "Enter Item Number: ";
    cin >> itemNo;
    cout << "Enter Quantity: ";
    cin >> qty;
    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    double amount = qty * unitPrice;
    double discount = 0.20 * amount;
    double finalAmount = amount - discount;

    cout << "\n--- Bill Details ---\n";
    cout << "Item No     : " << itemNo << endl;
    cout << "Amount      : " << amount << endl;
    cout << "Discount(20%): " << discount << endl;
    cout << "Final Amount : " << finalAmount << endl;
    return 0;
}
