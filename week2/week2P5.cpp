#include <iostream>
using namespace std;

int main() {
    float price, discountPercent, discountAmount, discountedPrice;

    cout << "Enter price of item: ";
    cin >> price;

    cout << "Enter discount percent: ";
    cin >> discountPercent;

    discountAmount = price * discountPercent;
    discountedPrice = price - discountPercent;   // <-- Oops! Should subtract discountAmount

    cout << "Discount amount: " << discountAmount << endl;
    cout << "Discounted price: " << discountedPrice << endl;

    return 0;
}
