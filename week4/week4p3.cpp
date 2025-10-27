/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numBooks;
    double costPerBook, totalCost, shipping;

    cout << "Enter number of books: ";
    cin >> numBooks;
    cout << "Enter cost per book: ";
    cin >> costPerBook;

    totalCost = numBooks * costPerBook;

    if (totalCost > 50)
        shipping = 0;
    else
        shipping = 25;

    cout << "Order Total: $" << totalCost << endl;
    cout << "Shipping Charge: $" << shipping << endl;

    return 0;
}