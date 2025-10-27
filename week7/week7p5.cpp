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
    char district_code;
    float credit_hours, rate, tuition;
    float total_tuition = 0.0f;
    float total_credits = 0.0f;
    int student_count = 0;

    cout << "Enter last name, credit hours, and district code (I or O), ctrl+z to stop: ";
    cin >> last_name >> credit_hours >> district_code;

    while (!cin.eof()) {
        if (district_code == 'I' || district_code == 'i')
            rate = 250.0;
        else if (district_code == 'O' || district_code == 'o')
            rate = 550.0;
        else
            rate = 0.0;

        tuition = credit_hours * rate;
        total_tuition = total_tuition + tuition;
        total_credits = total_credits + credit_hours;
        student_count = student_count + 1;

        cout << fixed << setprecision(2);
        cout << "Student: " << last_name
             << "  Tuition Owed: $" << tuition << endl;

        cout << "Enter next last name, credit hours, and district code, ctrl+z to stop: ";
        cin >> last_name >> credit_hours >> district_code;
    }

    cout << endl;
    cout << "Total Tuition: $" << total_tuition << endl;
    cout << "Total Credit Hours: " << total_credits << endl;
    cout << "Number of Students: " << student_count << endl;

    system("pause");
    return 0;
}
