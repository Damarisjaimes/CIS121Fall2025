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

void compute_tuition_and_fees(char student_code, float credits, float &tuition_owed, float &course_fees)
{
    float cost_per_credit = (student_code == 'I') ? 250.0f : 500.0f;
    tuition_owed = credits * cost_per_credit;
    course_fees = tuition_owed * 0.10f;
}

int main()
{
    ifstream infile;
    infile.open("student.txt");

    string lname;
    char code;
    float credits, tuition, fees;
    float sum_tuition = 0.0;
    int count = 0;

    while (!infile.eof())
    {
        infile >> lname >> code >> credits;
        compute_tuition_and_fees(code, credits, tuition, fees);
        sum_tuition += tuition;
        count++;

        cout << lname << "  Code: " << code << "  Credits: " << credits << "  Tuition: $" << fixed << setprecision(2) << tuition << "  Fees: $" << fees << endl;
    }

    infile.close();
    cout << "Total Tuition: $" << sum_tuition << "  Students: " << count << "  Average Tuition: $" << sum_tuition / count << endl;
    return 0;
}
