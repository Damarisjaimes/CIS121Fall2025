/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char lastName[20];
    int dependents;
    double grossIncome, adjustedGross, incomeTax, taxRate;

    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter number of dependents: ";
    cin >> dependents;
    cout << "Enter gross income: ";
    cin >> grossIncome;

    adjustedGross = grossIncome - (dependents * 12000);

    if (adjustedGross > 50000)
        taxRate = 0.2;
    else
        taxRate = 0.1;

    incomeTax = adjustedGross * taxRate;

    if (incomeTax < 0)
        incomeTax = 100;

    cout << "Last Name: " << lastName << endl;
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Dependents: " << dependents << endl;
    cout << "Adjusted Gross Income: $" << adjustedGross << endl;
    cout << "Income Tax: $" << incomeTax << endl;

    return 0;
}
