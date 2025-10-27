/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <iomanip>
using namespace std;

void computeWidgets(int widgets, float& costPer, float& extPrice, float& tax, float& totalOrder)
{
    if (widgets >= 10000)
        costPer = 4.00;
    else if (widgets >= 5000)
        costPer = 5.00;
    else
        costPer = 10.00;

    extPrice = widgets * costPer;
    tax = extPrice * 0.07;
    totalOrder = extPrice + tax;
}

int main()
{
    int widgets;
    float costPer, extPrice, tax, totalOrder, totalAll = 0.0;

    cout << "Enter number of widgets, ctl+z to stop: ";
    cin >> widgets;

    while (!cin.eof())
    {
        computeWidgets(widgets, costPer, extPrice, tax, totalOrder);

        cout << fixed << setprecision(2);
        cout << "Widgets: " << widgets << "  Cost per Widget: $" << costPer << "  Extended Price: $" << extPrice
             << "  Tax: $" << tax << "  Total Order: $" << totalOrder << endl;

        totalAll += totalOrder;

        cout << "Enter number of widgets, ctl+z to stop: ";
        cin >> widgets;
    }

    cout << endl;
    cout << "Total of all orders: $" << totalAll << endl;

    return 0;
}
