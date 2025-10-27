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
    float hits, at_bats, batting_avg;
    int player_count = 0;

    cout << "Enter last name, hits, and at bats, ctrl+z to stop: ";
    cin >> last_name >> hits >> at_bats;

    while (!cin.eof()) {
        batting_avg = hits / at_bats;
        player_count = player_count + 1;

        cout << fixed << setprecision(3);
        cout << "Player: " << last_name << "  Batting Average: " << batting_avg << endl;

        cout << "Enter next last name, hits, and at bats, ctrl+z to stop: ";
        cin >> last_name >> hits >> at_bats;
    }

    cout << endl;
    cout << "Total number of players: " << player_count << endl;

    system("pause");
    return 0;
}




