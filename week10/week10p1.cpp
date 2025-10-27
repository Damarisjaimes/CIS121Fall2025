/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <iomanip>
using namespace std;

void computeOrder(float quantity, float price, float& total, float& tax, float& totalOrder)
{
    total = quantity * price;
    tax = total * 0.07;
    totalOrder = total + tax;
}

int main()
{
    float quantity, price, total, tax, totalOrder, totalAll = 0.0, taxAll = 0.0;

    cout << "Enter quantity and price, ctl+z to stop: ";
    cin >> quantity >> price;

    while (!cin.eof())
    {
        computeOrder(quantity, price, total, tax, totalOrder);

        cout << fixed << setprecision(2);
        cout << "Total: $" << total << "  Tax: $" << tax << "  Total Order: $" << totalOrder << endl;

        totalAll += total;
        taxAll += tax;

        cout << "Enter quantity and price, ctl+z to stop: ";
        cin >> quantity >> price;
    }

    cout << endl;
    cout << "Total of all orders: $" << totalAll << endl;
    cout << "Total tax for all orders: $" << taxAll << endl;

    return 0;
}




