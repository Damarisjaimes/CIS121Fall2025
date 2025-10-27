#include <iostream>
using namespace std;

int main() 
{
    double purchaseprice, currentprice, percentchange;

    cout << "enter the purchase price of the stock: ";
    cin >> purchaseprice;
    cout << "enter the current price of the stock: ";
    cin >> currentprice;

    percentchange = (currentprice- purchaseprice) / purchaseprice* 100;

    cout << "the stock percentage change is: " << percentchange  << endl;

    return 0;
}
