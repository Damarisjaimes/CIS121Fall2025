/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    double examscore1, examscore2, total;

    cout << "Enter first exam score: "; cin >> examscore1;
    cout << "Enter second exam score: ";cin >> examscore2;
    
    total = (examscore1 * 0.60) + (examscore2 * 0.40);

    cout << "total score = " << total << endl;

    return 0;
}
