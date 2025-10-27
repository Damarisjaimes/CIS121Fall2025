/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void computeTuition(float hours, float aid, float& tuition, float& owed)
{
    tuition = hours * 250;
    owed = tuition - aid;
}

int main()
{
    string lname;
    float hours, aid, tuition, owed, totalOwed = 0.0;
    int count = 0;

    cout << "Enter last name, credit hours, and financial aid, ctl+z to stop: ";
    cin >> lname >> hours >> aid;

    while (!cin.eof())
    {
        computeTuition(hours, aid, tuition, owed);

        cout << fixed << setprecision(2);
        cout << lname << " Tuition: $" << tuition << "  Tuition Owed: $" << owed << endl;

        totalOwed += owed;
        count++;

        cout << "Enter last name, credit hours, and financial aid, ctl+z to stop: ";
        cin >> lname >> hours >> aid;
    }

    cout << endl;
    cout << "Total tuition owed by all students: $" << totalOwed << endl;
    cout << "Number of entries: " << count << endl;
    cout << "Average amount owed: $" << totalOwed / count << endl;

    return 0;
}
