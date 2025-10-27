/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float compute_pay(char code, float hours) {
    float rate;
    if (code == 'L') rate = 25.0f;
    else if (code == 'A') rate = 30.0f;
    else rate = 50.0f;

    if (hours > 40)
        return 40 * rate + (hours - 40) * rate * 1.5f;
    else
        return hours * rate;
}

int main() {
    string last_name;
    char job_code;
    float hours, pay;
    float total_pay = 0.0f;
    int count = 0;

    cout << "Enter last name, job code, hours worked (ctl+z to stop): ";
    cin >> last_name >> job_code >> hours;

    while (!cin.eof()) {
        pay = compute_pay(job_code, hours);

        cout << setprecision(2) << fixed;
        cout << last_name << " - Pay: $" << setw(8) << pay << endl;

        total_pay += pay;
        count++;

        cout << "Enter last name, job code, hours worked (ctl+z to stop): ";
        cin >> last_name >> job_code >> hours;
    }

    if (count > 0) {
        cout << "Total pay: $" << setw(8) << total_pay << endl;
        cout << "Average pay: $" << setw(8) << total_pay / count << endl;
        cout << "Number of employees: " << setw(8) << count << endl;
    }

    return 0;
}

