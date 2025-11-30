/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 8;

void loadArrays(string city[], int pop[]);
void displayArrays(string city[], int pop[]);
int searchArrays(string key, string city[]);

int main() {
    string city[SIZE];
    int pop[SIZE];
    string key;

    loadArrays(city, pop);
    displayArrays(city, pop);

    cout << "Enter city name, ctl+z to stop: ";
    while (cin >> key) {
        int pos = searchArrays(key, city);
        if (pos != -1)
            cout << city[pos] << " has a population of " << pop[pos] << endl;
        else
            cout << key << " not found" << endl;

        cout << "Enter city name, ctl+z to stop: ";
    }

    cout << "Goodbye. Have a nice day." << endl;
    return 0;
}

void loadArrays(string city[], int pop[]) {
    ifstream inFile("cities.txt");
    for (int i = 0; i < SIZE; i++) {
        inFile >> city[i] >> pop[i];
    }
    inFile.close();
}

void displayArrays(string city[], int pop[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << city[i] << " " << pop[i] << endl;
    }
    cout << endl;
}

int searchArrays(string key, string city[]) {
    for (int i = 0; i < SIZE; i++) {
        if (key == city[i])
            return i;
    }
    return -1;
}

