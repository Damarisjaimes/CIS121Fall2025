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

void loadArrays(string fname[], string lname[], double sal[]);
void displayArrays(string fname[], string lname[], double sal[]);
int searchArrays(string key, string lname[]);

int main() {
    string fname[SIZE], lname[SIZE];
    double sal[SIZE];
    string key;

    loadArrays(fname, lname, sal);
    displayArrays(fname, lname, sal);

    cout << "Enter last name, ctl+z to stop: ";
    while (cin >> key) {
        int pos = searchArrays(key, lname);
        if (pos != -1)
            cout << fname[pos] << " " << lname[pos] << " " << sal[pos] << endl;
        else
            cout << key << " not found" << endl;

        cout << "Enter last name, ctl+z to stop: ";
    }

    return 0;
}

void loadArrays(string fname[], string lname[], double sal[]) {
    ifstream inFile("empldata.txt");
    for (int i = 0; i < SIZE; i++) {
        inFile >> fname[i] >> lname[i] >> sal[i];
    }
    inFile.close();
}

void displayArrays(string fname[], string lname[], double sal[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << fname[i] << " " << lname[i] << " " << sal[i] << endl;
    }
    cout << endl;
}

int searchArrays(string key, string lname[]) {
    for (int i = 0; i < SIZE; i++) {
        if (key == lname[i])
            return i;
    }
    return -1;
}

