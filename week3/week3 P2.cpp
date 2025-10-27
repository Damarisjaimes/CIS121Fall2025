/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
 float quantitys;
 float stockprice;
 cout<< "Enter quantity: ";
 cin>> quantitys;
 cout<< "Enter stock price: ";
 cin>> stockprice;
 
 double valueofstock= quantitys*stockprice;
 cout<< "Value of stock: "<<valueofstock<< endl;


    return 0;
}