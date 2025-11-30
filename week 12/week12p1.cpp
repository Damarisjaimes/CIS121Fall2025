/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 10;

void loadArrays(string fname[], string lname[], double gpa[]);
void displayArrays(string fname[], string lname[], double gpa[]);
void displayArraysReverse(string fname[], string lname[], double gpa[]);

int main() {
    string fname[SIZE], lname[SIZE];
    double gpa[SIZE];

    loadArrays(fname, lname, gpa);
    displayArrays(fname, lname, gpa);
    displayArraysReverse(fname, lname, gpa);

    return 0;
}

void loadArrays(string fname[], string lname[], double gpa[]) {
    ifstream inFile("students.txt");
    for (int i = 0; i < SIZE; i++) {
        inFile >> fname[i] >> lname[i] >> gpa[i];
    }
    inFile.close();
}

void displayArrays(string fname[], string lname[], double gpa[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;
    }
    cout << endl;
}

void displayArraysReverse(string fname[], string lname[], double gpa[]) {
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;
    }
    cout << endl;
}
