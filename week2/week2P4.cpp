#include <iostream>
using namespace std;

int main() {
    string lastName;
    int credits;
    int totalTuition;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter number of credits taken: ";
    cin >> credits;

    totalTuition = (credits * 250) + 100;

    cout << "Student: " << lastName << endl;
    cout << "Total tuition: " << totalTuition << endl;

    return 0;
}
