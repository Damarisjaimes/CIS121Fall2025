/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void displayArrays(const vector<string>& make, const vector<string>& model) {
    for (int i = 0; i < make.size(); i++) {
        cout << make[i] << " " << model[i] << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of autos: ";
    cin >> n;

    vector<string> make(n);
    vector<string> model(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter make for auto #" << i + 1 << ": ";
        cin >> make[i];
        cout << "Enter model for auto #" << i + 1 << ": ";
        cin >> model[i];
    }

    displayArrays(make, model);
    return 0;
}





