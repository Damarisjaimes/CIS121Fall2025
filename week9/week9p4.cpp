/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <iomanip>
using namespace std;

double findPayRate(char jobCode) {
    if (jobCode == 'L')
        return 25.00;
    else if (jobCode == 'A')
        return 30.00;
    else if (jobCode == 'J')
        return 50.00;
    else
        return 0.00;
}

double findGrossPay(double hours, double payRate) {
    if (hours > 40)
        return (40 * payRate) + ((hours - 40) * payRate * 1.5);
    else
        return hours * payRate;
}

int main() {
    string lastName;
    char jobCode;
    double hours, payRate, grossPay, totalGross = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, job code, and hours worked (Ctrl+Z to stop): ";

    while (cin >> lastName >> jobCode >> hours) {
        payRate = findPayRate(jobCode);
        grossPay = findGrossPay(hours, payRate);
        cout << lastName << "'s Gross Pay = $" << grossPay << endl;
        totalGross += grossPay;
        cout << "\nEnter last name, job code, and hours worked (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Gross Pay = $" << totalGross << endl;
    return 0;
}
