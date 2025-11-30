/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

float compute_mpg(float gallons, float miles)
{
    return miles / gallons;
}

int main()
{
    ifstream infile;
    infile.open("trips.txt");

    float gallons, miles, mpg;
    float sum_gallons = 0.0, sum_miles = 0.0;

    while (!infile.eof())
    {
        infile >> gallons >> miles;
        mpg = compute_mpg(gallons, miles);
        sum_gallons += gallons;
        sum_miles += miles;

        cout << "Gallons: " << gallons << "  Miles: " << miles << "  MPG: " << fixed << setprecision(2) << mpg << endl;
    }

    infile.close();
    cout << "Total Gallons: " << sum_gallons << "  Total Miles: " << sum_miles << endl;
    return 0;
}
