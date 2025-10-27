/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <iomanip>
using namespace std;

double findCostPerCredit(char districtCode) {
    if (districtCode == 'I')
        return 250.00;
    else if (districtCode == 'O')
        return 550.00;
    else
        return 0.00;
}

double findTuition(double creditHours, double costPerCredit) {
    return creditHours * costPerCredit;
}

int main() {
    string lastName;
    char districtCode;
    double creditHours, costPerCredit, tuition, totalTuition = 0;

    cout << fixed << setprecision(2);
    cout << "Enter student last name, credit hours, and district code (Ctrl+Z to stop): ";

    while (cin >> lastName >> creditHours >> districtCode) {
        costPerCredit = findCostPerCredit(districtCode);
        tuition = findTuition(creditHours, costPerCredit);
        cout << lastName << "'s Tuition Cost = $" << tuition << endl;
        totalTuition += tuition;
        cout << "\nEnter student last name, credit hours, and district code (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Tuition Cost = $" << totalTuition << endl;
    return 0;
}
