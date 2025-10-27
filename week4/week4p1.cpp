/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int quantity;
    double unitPrice, extendedPrice, tax, total;

    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity >= 1000)
        unitPrice = 3;
    else
        unitPrice = 5;

    extendedPrice = quantity * unitPrice;
    tax = extendedPrice * 0.07;
    total = extendedPrice + tax;

    cout << "Quantity: " << quantity << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Extended Price: $" << extendedPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
