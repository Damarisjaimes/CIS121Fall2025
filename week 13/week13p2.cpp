/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    string first;
    string last;
    double hours;
    double rate;
    double gross;
};

double computeGross(double hours, double rate) {
    if (hours > 40)
        return 40 * rate + (hours - 40) * rate * 1.5;
    else
        return hours * rate;
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> emp(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter first name: ";
        cin >> emp[i].first;
        cout << "Enter last name: ";
        cin >> emp[i].last;
        cout << "Enter hours worked: ";
        cin >> emp[i].hours;
        cout << "Enter hourly rate: ";
        cin >> emp[i].rate;

        emp[i].gross = computeGross(emp[i].hours, emp[i].rate);
    }

    for (int i = 0; i < emp.size(); i++) {
        cout << emp[i].first << " " << emp[i].last
             << " Hours: " << emp[i].hours
             << " Rate: " << emp[i].rate
             << " Gross Pay: " << emp[i].gross << endl;
    }

    return 0;
}




