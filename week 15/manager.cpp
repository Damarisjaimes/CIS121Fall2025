/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include "Employee.cpp"
#include <iostream>
using namespace std;

class Manager : public Employee
{
public:
    Manager() : Employee() {}

    // Long term bonus = 50% of salary
    float Long_Term_Bonus() {
        return m_salary * 0.50f;
    }

    // Override base bonus = 50% of annual salary
    float Bonus() override {
        m_bonus = m_salary * 0.50f;
        return m_bonus;
    }
};


