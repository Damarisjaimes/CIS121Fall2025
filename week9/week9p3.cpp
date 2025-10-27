/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;

double findMilesPerGallon(double miles, double gallons) {
    return miles / gallons;
}

double findGasCost(double gallons) {
    return gallons * 3.50;
}

int main() {
    string city;
    double miles, gallons, mpg, cost, totalCost = 0;

    cout << fixed << setprecision(2);
    cout << "Enter destination city, miles, and gallons used (Ctrl+Z to stop): ";

    while (cin >> city >> miles >> gallons) {
        mpg = findMilesPerGallon(miles, gallons);
        cost = findGasCost(gallons);
        cout << city << ": MPG = " << mpg << ", Gas Cost = $" << cost << endl;
        totalCost += cost;
        cout << "\nEnter destination city, miles, and gallons used (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Gas Cost = $" << totalCost << endl;
    return 0;
}
