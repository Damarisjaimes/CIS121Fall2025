/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void computeInvestment(float amount, float rate5, float rate10, float& amt5, float& amt10)
{
    amt5 = amount * pow(1 + rate5, 5);
    amt10 = amount * pow(1 + rate10, 10);
}

int main()
{
    float amount, rate5, rate10, amt5, amt10;

    cout << "Enter amount of investment, 5 year rate, and 10 year rate, ctl+z to stop: ";
    cin >> amount >> rate5 >> rate10;

    while (!cin.eof())
    {
        computeInvestment(amount, rate5, rate10, amt5, amt10);

        cout << fixed << setprecision(2);
        cout << "Investment: $" << amount << "  Five Year Amount: $" << amt5 << "  Ten Year Amount: $" << amt10 << endl;

        cout << "Enter amount of investment, 5 year rate, and 10 year rate, ctl+z to stop: ";
        cin >> amount >> rate5 >> rate10;
    }

    return 0;
}
