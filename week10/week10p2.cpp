/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <iomanip>
using namespace std;

void computePostage(float weight, int zipcode, float& weightCharge, float& areaCharge, float& postage)
{
    if (weight > 100)
        weightCharge = weight * 0.02;
    else if (weight > 50)
        weightCharge = weight * 0.03;
    else
        weightCharge = weight * 0.05;

    if (zipcode == 60171)
        areaCharge = 2.00;
    else if (zipcode == 60172)
        areaCharge = 2.50;
    else if (zipcode == 60635)
        areaCharge = 3.00;
    else
        areaCharge = 5.00;

    postage = weightCharge + areaCharge;
}

int main()
{
    float weight, weightCharge, areaCharge, postage;
    int zipcode, count = 0;

    cout << "Enter weight and zip code, ctl+z to stop: ";
    cin >> weight >> zipcode;

    while (!cin.eof())
    {
        computePostage(weight, zipcode, weightCharge, areaCharge, postage);

        cout << fixed << setprecision(2);
        cout << "Area Charge: $" << areaCharge << "  Weight Charge: $" << weightCharge << "  Postage: $" << postage << endl;

        count++;

        cout << "Enter weight and zip code, ctl+z to stop: ";
        cin >> weight >> zipcode;
    }

    cout << endl;
    cout << "Number of entries: " << count << endl;

    return 0;
}
