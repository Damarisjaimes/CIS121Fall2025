#include<iostream>
using namespace std;
int main()
{
    float quantity, unitprice;
    float extendedprice;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unitprice;
    extendedprice = quantity * unitprice;
    cout << "Extended price: " << extendedprice << endl;

    return 0;
}
