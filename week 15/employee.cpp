/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string m_firstName;
    string m_lastName;
    float m_salary;
    float m_bonus;

public:
    Employee() {
        m_firstName = "";
        m_lastName = "";
        m_salary = 0.0f;
        m_bonus = 0.0f;
    }

    // setters
    void FirstName(string first) { m_firstName = first; }
    void LastName(string last) { m_lastName = last; }
    void Salary(float s) { m_salary = s; }

    // getters
    string FirstName() { return m_firstName; }
    string LastName() { return m_lastName; }
    float Salary() { return m_salary; }

    // default employee bonus (10%)
    virtual float Bonus() {
        m_bonus = m_salary * 0.10f;
        return m_bonus;
    }
};
