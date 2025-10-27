/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char applianceName[20];
    double cost, warranty, total;

    cout << "Enter appliance name: ";
    cin >> applianceName;
    cout << "Enter cost: ";
    cin >> cost;

    if (cost > 1000)
        warranty = cost * 0.10;
    else
        warranty = cost * 0.05;

    total = cost + warranty;

    cout << "Appliance Name: " << applianceName << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Warranty: $" << warranty << endl;
    cout << "Total: $" << total << endl;

    return 0;
}