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
    float weight, rate, total;

    cout << "Enter weight of metal: ";
    cin >> weight;

    if (weight > 100)
        rate = 0.50f;
    else if (weight >= 30)
        rate = 0.25f;
    else if (weight >= 20)
        rate = 0.20f;
    else
        rate = 0.10f;

    total = weight * rate;

    cout << fixed << setprecision(2);
    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Rate per pound: $" << rate << endl;
    cout << "Total Pay: $" << total << endl;

    system("pause");
    return 0;
}