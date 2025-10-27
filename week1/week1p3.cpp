#include<iostream>
using namespace std;
int main()
{
	// define variables
	float assign1, assign2;
	float lab1, lab2, t;

	// input phase
	cout << "Enter scores for assignments 1 and 2";
	cin >> assign1 >> assign2;
	cout << "Enter scores for lab 1 and 2";
	cin >> lab1 >> lab2;

	// process phase
	t = lab1 + lab2 + assign1 + assign2;

	// output
	cout << "Total points earned " << t << endl;

	system("pause");

	return 0;
}