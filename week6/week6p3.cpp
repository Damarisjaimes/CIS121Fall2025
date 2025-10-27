/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tickets;
    char location;
    float price, total;

    cout << "Enter number of tickets: ";
    cin >> tickets;
    cout << "Enter location code (H or L): ";
    cin >> location;

    if (tickets > 25 || location == 'H')
        price = 30.00;
    else if (tickets > 10 || location == 'L')
        price = 40.00;
    else
        price = 50.00;

    total = tickets * price;

    cout << fixed << setprecision(2);
    cout << "Tickets: " << tickets << endl;
    cout << "Price per Ticket: $" << price << endl;
    cout << "Total Cost: $" << total << endl;

    return 0;
}
