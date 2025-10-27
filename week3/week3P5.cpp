#include <iostream>
using namespace std;

int main() 
{
    double priceperunit, costperunit, fixedcosts, breakeven;

    cout << "enter price per unit: ";
    cin >> priceperunit;
    cout << "enter cost per unit: ";
    cin >> costperunit;
    cout << "enter fixed costs: ";
    cin >> fixedcosts;

    breakeven = fixedcosts / (priceperunit - costperunit);

    cout << "break-even point: " << breakeven << " units" << endl;

    return 0;
}
