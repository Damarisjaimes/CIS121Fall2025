#include <iostream>
using namespace std;

int main() {
    string lastName;
    float hours, payRate, grossPay;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter pay rate: ";
    cin >> payRate;

    grossPay = hours * payRate;

    cout << "Employee: " << lastName << endl;
    cout << "Gross pay: " << grossPay << endl;

    return 0;
}

