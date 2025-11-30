/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void compute_savings_and_tax(float MSRP, float sales_price, float &savings, float &sales_tax)
{
    savings = MSRP - sales_price;
    sales_tax = sales_price * 0.07f;
}

int main()
{
    ifstream infile;
    infile.open("auto.txt");

    string make, model;
    float MSRP, sales_price, savings, sales_tax;
    float sum_savings = 0.0;

    while (!infile.eof())
    {
        infile >> make >> model >> MSRP >> sales_price;
        compute_savings_and_tax(MSRP, sales_price, savings, sales_tax);
        sum_savings += savings;

        cout << make << " " << model << endl;
        cout << fixed << setprecision(2);
        cout << "MSRP: $" << MSRP << "  Sales Price: $" << sales_price << "  Savings: $" << savings << "  Sales Tax: $" << sales_tax << endl;
    }

    infile.close();
    cout << "Sum of Savings: $" << sum_savings << endl;
    return 0;
}



