/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float compute_mpg(float miles, float gallons) {
    return miles / gallons;
}

int main() {
    string city;
    float miles, gallons, mpg;
    float total_miles = 0.0f;
    int trips = 0;

    cout << "Enter city (ctl+z to stop): ";
    cin >> city;

    while (!cin.eof()) {
        cout << "Enter miles travelled: ";
        cin >> miles;
        cout << "Enter gallons used: ";
        cin >> gallons;

        mpg = compute_mpg(miles, gallons);

        cout << setprecision(2) << fixed;
        cout << city << " - MPG: " << setw(8) << mpg << endl;

        total_miles += miles;
        trips++;

        cout << "Enter city (ctl+z to stop): ";
        cin >> city;
    }

    cout << "Total miles travelled: " << setw(8) << total_miles << endl;
    cout << "Number of trips: " << setw(8) << trips << endl;

    return 0;
}
