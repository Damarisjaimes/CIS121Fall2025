#include <iostream>
using namespace std;
int main()
{ float length;
    float width;
    cout<<"Enter Length of the rectangle: "; cin>> length;
    cout<<"Enter Width of the rectangle: "; cin>> width;
    float circumference = 2 *(length + width);
   float area = length* width;
    cout<<"Circumference of the rectangle is: "<< circumference;
    cout<<"Area of the rectangle is: "<< area;
    return 0;

}
