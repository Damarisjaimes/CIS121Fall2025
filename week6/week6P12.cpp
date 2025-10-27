/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int part, quantity;
    float cost, total;

    cout << "Enter part number (10, 99, 55, 70, 50): ";
    cin >> part;
    cout << "Enter quantity: ";
    cin >> quantity;

    if (part == 10 && quantity > 1000)
        cost = 1.00;
    else if (part == 99 && quantity > 500)
        cost = 2.00;
    else
        cost = 5.00;

    total = quantity * cost;

    cout << fixed << setprecision(2);
    cout << "Part Number: " << part << endl;
    cout << "Cost per Unit: $" << cost << endl;
    cout << "Total Cost: $" << total << endl;

    return 0;
}
