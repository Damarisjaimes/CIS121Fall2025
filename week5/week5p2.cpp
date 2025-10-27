/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int pounds;
    float price_per_lb, total;

    cout << "Enter pounds of apples: ";
    cin >> pounds;

    if (pounds > 100)
        price_per_lb = 0.10f;
    else if (pounds >= 50)
        price_per_lb = 0.25f;
    else
        price_per_lb = 0.50f;

    total = pounds * price_per_lb;

    cout << fixed << setprecision(2);
    cout << "Price per pound: $" << price_per_lb << endl;
    cout << "Total: $" << total << endl;

    system("pause");
    return 0;
}
