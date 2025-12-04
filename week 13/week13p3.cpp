/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string first;
    string last;
    char district;
    int credits;
    double tuition;
};

double computeTuition(char district, int credits) {
    if (district == 'I' || district == 'i')
        return credits * 250.0;
    else
        return credits * 500.0;
}

void display(const vector<Student>& s) {
    for (const auto& st : s) {
        cout << st.first << " " << st.last
             << " District: " << st.district
             << " Credits: " << st.credits
             << " Tuition: " << st.tuition << endl;
    }
}

Student temp; // global structure instance (meets requirement)

int main() {
    vector<Student> stu;

    while (true) {
        cout << "First name (ctrl+z to stop): ";
        if (!(cin >> temp.first)) break;

        cout << "Last name: ";
        cin >> temp.last;

        cout << "District code (I/O): ";
        cin >> temp.district;

        cout << "Credits taken: ";
        cin >> temp.credits;

        temp.tuition = computeTuition(temp.district, temp.credits);
        stu.push_back(temp);
    }

    display(stu);
    cout << "Total number of students: " << stu.size();
    return 0;
}
