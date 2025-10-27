/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include <iostream>
#include <iomanip>
using namespace std;

double findTotal(double quantity, double price) {
    return quantity * price;
}

double findDiscountedTotal(double total) {
    double discount;
    if (total > 10000)
        discount = total * 0.10;
    else
        discount = total * 0.05;
    double discountedTotal = total - discount;
    return discountedTotal;
}

int main() {
    double quantity, price, total, discountedTotal;
    double totalSum = 0, discountedSum = 0;

    cout << fixed << setprecision(2);
    cout << "Enter quantity and price (Ctrl+Z to stop): ";

    while (cin >> quantity >> price) {
        total = findTotal(quantity, price);
        discountedTotal = findDiscountedTotal(total);
        cout << "Total = $" << total << endl;
        cout << "Discounted Total = $" << discountedTotal << endl;
        totalSum += total;
        discountedSum += discountedTotal;
        cout << "\nEnter quantity and price (Ctrl+Z to stop): ";
    }

    cout << "\nSum of Totals = $" << totalSum << endl;
    cout << "Sum of Discounted Totals = $" << discountedSum << endl;
    return 0;
}
