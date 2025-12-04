/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <string>
#include "Manager.cpp"
using namespace std;

int main()
{
    Manager boss;

    boss.FirstName("Damaris");
    boss.LastName("Chavez");
    boss.Salary(120000.00f);

    cout << "First Name: " << boss.FirstName() << endl;
    cout << "Last Name: " << boss.LastName() << endl;
    cout << "Salary: $" << boss.Salary() << endl;
    cout << "Bonus (50% Annual Salary): $" << boss.Bonus() << endl;
    cout << "Long Term Bonus (50%): $" << boss.Long_Term_Bonus() << endl;

    return 0;
}
