/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string lastname;
    int score;
    char grade;

    cout << "Enter student last name: ";
    cin >> lastname;
    cout << "Enter score: ";
    cin >> score;

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << lastname << " has a grade of " << grade << endl;

    system("pause");
    return 0;
}
