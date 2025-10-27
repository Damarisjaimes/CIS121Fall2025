/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float quantity, price;
    float extended_price, discount, discounted_price;
    float total_discounted = 0.0f;

    cout << "Enter quantity and price, ctrl+z to stop: ";
    cin >> quantity >> price;

    while (!cin.eof()) {
        extended_price = quantity * price;

        if (quantity > 1000)
            discount = extended_price * 0.10;
        else
            discount = 0.0;

        discounted_price = extended_price - discount;

        cout << fixed << setprecision(2);
        cout << "Quantity: " << quantity << "  Price: $" << price
             << "  Extended: $" << extended_price
             << "  Discount: $" << discount
             << "  Discounted Price: $" << discounted_price << endl;

        total_discounted = total_discounted + discounted_price;

        cout << "Enter next quantity and price, ctrl+z to stop: ";
        cin >> quantity >> price;
    }

    cout << endl;
    cout << "Total of all discounted prices: $" << total_discounted << endl;

    system("pause");
    return 0;
}



