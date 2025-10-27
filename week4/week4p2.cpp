/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    char item;
    int quantity;
    double unitPrice, extendedPrice;

    cout << "Enter item (A/B): ";
    cin >> item;
    cout << "Enter quantity: ";
    cin >> quantity;

    if (item == 'A')
        unitPrice = 10;
    else if (item == 'B')
        unitPrice = 20;

    extendedPrice = quantity * unitPrice;

    cout << "Item: " << item << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Extended Price: $" << extendedPrice << endl;

    return 0;
}
