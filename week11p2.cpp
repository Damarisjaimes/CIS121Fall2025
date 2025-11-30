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

float compute_extended_price(int quantity, float price)
{
    return quantity * price;
}

int main()
{
    ifstream infile;
    infile.open("grocery.txt");

    string item;
    int quantity;
    float price, extended_price, sum_extended = 0.0;

    while (!infile.eof())
    {
        infile >> item >> quantity >> price;
        extended_price = compute_extended_price(quantity, price);
        sum_extended += extended_price;

        cout << item << "  Qty: " << quantity << "  Price: $" << price << "  Extended: $" << extended_price << endl;
    }

    infile.close();
    float tax = sum_extended * 0.07f;
    float total = sum_extended + tax;
    cout << fixed << setprecision(2);
    cout << "Sum of Extended Prices: $" << sum_extended << "  Tax: $" << tax << "  Total Receipt: $" << total << endl;
    return 0;
}


