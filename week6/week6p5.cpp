/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char jobCode;
    int hours;
    float rate, grossPay;

    cout << "Enter job code (L, J, A): ";
    cin >> jobCode;
    cout << "Enter hours worked: ";
    cin >> hours;

    if (jobCode == 'L' && hours > 40)
        rate = 50;
    else if (jobCode == 'L' && hours <= 40)
        rate = 40;
    else if (jobCode == 'J' && hours > 60)
        rate = 100;
    else if (jobCode == 'J' && hours <= 60)
        rate = 75;
    else if (jobCode == 'A' && hours > 40)
        rate = 25;
    else if (jobCode == 'A' && hours <= 40)
        rate = 20;
    else
        rate = 0; // just in case of bad input

    grossPay = hours * rate;

    cout << fixed << setprecision(2);
    cout << "Gross Pay: $" << grossPay << endl;

    return 0;
}


