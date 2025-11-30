/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

float compute_biweekly_salary(float annual_salary)
{
    return annual_salary / 26.0f;
}

int main()
{
    ifstream infile;
    infile.open("empl.txt");

    string lname;
    float salary, biweekly;
    float sum_salary = 0.0;
    int count = 0;

    while (!infile.eof())
    {
        infile >> lname >> salary;
        biweekly = compute_biweekly_salary(salary);
        sum_salary += salary;
        count++;

        cout << lname << "  Annual Salary: $" << fixed << setprecision(2) << salary << "  Bi-Weekly: $" << biweekly << endl;
    }

    infile.close();
    cout << "Total Annual Salary: $" << sum_salary << "  Employees: " << count << "  Average Salary: $" << sum_salary / count << endl;
    return 0;
}
