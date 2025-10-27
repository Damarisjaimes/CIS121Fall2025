/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char equipCode, dayCode;
    float cost;

    cout << "Enter equipment code (A, B, C): ";
    cin >> equipCode;
    cout << "Enter day code (H for half, F for full): ";
    cin >> dayCode;

    if (equipCode == 'A' && dayCode == 'F')
        cost = 10;
    else if (equipCode == 'A' && dayCode == 'H')
        cost = 15;
    else if (equipCode == 'B' && dayCode == 'F')
        cost = 20;
    else if (equipCode == 'B' && dayCode == 'H')
        cost = 35;
    else if (equipCode == 'C' && dayCode == 'H')
        cost = 40;
    else if (equipCode == 'C' && dayCode == 'F')
        cost = 45;
    else
        cost = 50;

    cout << fixed << setprecision(2);
    cout << "Rental Cost: $" << cost << endl;

    return 0;
}
