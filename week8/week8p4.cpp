/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************
* 
* 
* 
* 
* 
* #include <iostream>
#include <iomanip>
using namespace std;

float get_unit_price(char code) {
    if (code == 'W') return 10.0f;
    else if (code == 'C') return 15.0f;
    else return 20.0f;
}

float get_shipping(char code) {
    if (code == 'W') return 2.0f;
    else if (code == 'C') return 5.0f;
    else return 7.0f;
}

int main() {
    char product_code;
    int qty;
    float unit_price, shipping, ext_price, total = 0.0f;

    cout << "Enter product code and quantity (ctl+z to stop): ";
    cin >> product_code >> qty;

    while (!cin.eof()) {
        unit_price = get_unit_price(product_code);
        shipping = get_shipping(product_code);

        ext_price = unit_price * qty + shipping;
        total += ext_price;

        cout << setprecision(2) << fixed;
        cout << "Code: " << product_code 
             << ", Unit Price: $" << setw(6) << unit_price
             << ", Shipping: $" << setw(6) << shipping
             << ", Total: $" << setw(8) << ext_price << endl;

        cout << "Enter product code and quantity (ctl+z to stop): ";
        cin >> product_code >> qty;
    }

    cout << "Total of all orders: $" << setw(8) << total << endl;

    return 0;
}

* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 