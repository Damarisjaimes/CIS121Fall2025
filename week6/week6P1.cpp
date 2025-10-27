/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    char status;
    float price, extPrice, tax, total;

    cout << "Enter quantity of widgets: ";
    cin >> quantity;
    cout << "Enter customer status (A, B, C, D): ";
    cin >> status;

    if (quantity > 10000 && status == 'A')
        price = 10;
    else if (quantity > 10000 && status == 'B')
        price = 12;
    else if (quantity >= 5000 && quantity <= 10000 && status == 'C')
        price = 20;
    else if (quantity >= 5000 && quantity <= 10000 && status == 'D')
        price = 22;
    else
        price = 30;

    extPrice = quantity * price;
    tax = extPrice * 0.07;
    total = extPrice + tax;

    cout << fixed << setprecision(2);
    cout << "Extended Price: $" << extPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
