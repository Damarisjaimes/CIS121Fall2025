/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string last_name;
    char job_code;
    float hours, rate, pay;
    float total_pay = 0.0f;
    int employee_count = 0;

    cout << "Enter last name, job code (L, A, J), and hours worked, ctrl+z to stop: ";
    cin >> last_name >> job_code >> hours;

    while (!cin.eof()) {
        if (job_code == 'L' || job_code == 'l')
            rate = 25.0;
        else if (job_code == 'A' || job_code == 'a')
            rate = 30.0;
        else if (job_code == 'J' || job_code == 'j')
            rate = 50.0;
        else
            rate = 0.0;

        if (hours > 40)
            pay = (40 * rate) + ((hours - 40) * rate * 1.5);
        else
            pay = hours * rate;

        total_pay = total_pay + pay;
        employee_count = employee_count + 1;

        cout << fixed << setprecision(2);
        cout << "Employee: " << last_name
             << "  Job Code: " << job_code
             << "  Hours: " << hours
             << "  Pay: $" << pay << endl;

        cout << "Enter next last name, job code, and hours worked, ctrl+z to stop: ";
        cin >> last_name >> job_code >> hours;
    }

    cout << endl;
    cout << "Total Pay: $" << total_pay << endl;
    cout << "Number of Employees: " << employee_count << endl;
    cout << "Average Pay: $" << total_pay / employee_count << endl;

    system("pause");
    return 0;
}
