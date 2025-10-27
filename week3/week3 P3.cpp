#include <iostream>
using namespace std;

int main() {
    double totalOfMeal, tip, totalWithTip;

    cout << "Enter the total of the meal: ";
    cin >> totalOfMeal;


    tip = totalOfMeal * 0.15;          
    totalWithTip = totalOfMeal + tip;  


    cout << "Meal total: $" << totalOfMeal << endl;
    cout << "Tip (15%): $" << tip << endl;
    cout << "Total with tip: $" << totalWithTip << endl;

    return 0;
}
