/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float compute_tuition(float credits) {
    return credits * 250.0f;
}

int main() {
    string last_name;
    float credits, tuition;
    float total_tuition = 0.0f;
    int count = 0;

    cout << "Enter student last name and credits (ctl+z to stop): ";
    cin >> last_name >> credits;

    while (!cin.eof()) {
        tuition = compute_tuition(credits);

        cout << setprecision(2) << fixed;
        cout << last_name << " - Tuition: $" << setw(8) << tuition << endl;

        total_tuition += tuition;
        count++;

        cout << "Enter student last name and credits (ctl+z to stop): ";
        cin >> last_name >> credits;
    }

    cout << "Total tuition: $" << setw(8) << total_tuition << endl;
    cout << "Number of students: " << setw(8) << count << endl;

    return 0;
}
