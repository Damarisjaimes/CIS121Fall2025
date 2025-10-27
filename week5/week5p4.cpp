/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float salary, tax_rate, tax_amount;

    cout << "Enter annual salary: ";
    cin >> salary;

    if (salary > 100000)
        tax_rate = 0.40f;
    else if (salary >= 50000)
        tax_rate = 0.35f;
    else
        tax_rate = 0.25f;

    tax_amount = salary * tax_rate;

    cout << fixed << setprecision(2);
    cout << "Salary: $" << salary << endl;
    cout << "Tax Rate: " << (tax_rate * 100) << "%" << endl;
    cout << "Tax Amount: $" << tax_amount << endl;

    system("pause");
    return 0;
}
