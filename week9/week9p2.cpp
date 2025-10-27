/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <iomanip>
using namespace std;

double findBattingAverage(double hits, double atBats) {
    return hits / atBats;
}

int main() {
    string lastName;
    double hits, atBats, battingAverage;
    int count = 0;

    cout << fixed << setprecision(3);
    cout << "Enter player's last name, hits, and at-bats (Ctrl+Z to stop): ";

    while (cin >> lastName >> hits >> atBats) {
        battingAverage = findBattingAverage(hits, atBats);
        cout << lastName << "'s Batting Average = " << battingAverage << endl;
        count++;
        cout << "\nEnter player's last name, hits, and at-bats (Ctrl+Z to stop): ";
    }

    cout << "\nNumber of Players Entered = " << count << endl;
    return 0;
}

