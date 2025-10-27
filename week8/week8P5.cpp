/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float get_lab_fee(string dept, int course)
{
    if (dept == "CIS" && course == 101) return 50.0;
    else if (dept == "CIS" && course == 121) return 100.0;
    else if (dept == "MAT" && course == 111) return 25.0;
    else if (dept == "MAT" && course == 112) return 35.0;
    else if (dept == "ENG" && course == 100) return 55.0;
    else return 50.0;
}

int main()
{
    string dept;
    int course;
    float fee, total_fees = 0;
    int count = 0;

    cin >> dept >> course;

    while (!cin.eof())
    {
        fee = get_lab_fee(dept, course);
        total_fees += fee;
        count++;

        cout << fixed << setprecision(2);
        cout << "Department: " << setw(5) << dept 
             << "  Course: " << setw(4) << course 
             << "  Lab Fee: $" << setw(6) << fee << endl;

        cin >> dept >> course;
    }

    if (count > 0)
    {
        cout << "\nTotal lab fees: $" << total_fees << endl;
        cout << "Average lab fee: $" << total_fees / count << endl;
        cout << "Number of courses: " << count << endl;
    }

    return 0;
}
