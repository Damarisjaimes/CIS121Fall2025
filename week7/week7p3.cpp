/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string city;
    float miles, gallons, mpg;
    float total_miles = 0.0f;
    int trip_count = 0;

    cout << "Enter destination city, miles traveled, and gallons used, ctrl+z to stop: ";
    cin >> city >> miles >> gallons;

    while (!cin.eof()) {
        mpg = miles / gallons;
        total_miles = total_miles + miles;
        trip_count = trip_count + 1;

        cout << fixed << setprecision(2);
        cout << "City: " << city << "  Miles per Gallon: " << mpg << endl;

        cout << "Enter next destination city, miles, and gallons, ctrl+z to stop: ";
        cin >> city >> miles >> gallons;
    }

    cout << endl;
    cout << "Total miles traveled: " << total_miles << endl;
    cout << "Number of trips made: " << trip_count << endl;

    system("pause");
    return 0;
}
