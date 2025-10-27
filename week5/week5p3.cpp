/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    string lastname;
    float hrs, rate, gross_pay;
    char job_code;

    cout << "Enter employee last name: ";
    cin >> lastname;
    cout << "Enter job code (E, J, A): ";
    cin >> job_code;
    cout << "Enter hours worked: ";
    cin >> hrs;

    if (job_code == 'E' || job_code == 'e')
        rate = 25.00f;
    else if (job_code == 'J' || job_code == 'j')
        rate = 20.00f;
    else
        rate = 15.00f;

    gross_pay = rate * hrs;

    cout << fixed << setprecision(2);
    cout << lastname << endl;
    cout << "Hours worked: " << hrs << endl;
    cout << "Pay Rate: $" << rate << endl;
    cout << "Gross Pay: $" << gross_pay << endl;

    system("pause");
    return 0;
}
