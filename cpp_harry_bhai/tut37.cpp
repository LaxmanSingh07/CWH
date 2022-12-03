#include <iostream>
using namespace std;
// BASE CLASS
class Employee
{
private:
    int id;
    float salary;

public:
    Employee(int inpID)
    {

        cout << "Hey guys" << endl;
        id = inpID;
        salary = 234.5f;
    }
    Employee()
    {
        cout << "I am a default constructor and  I am enjoying my life" << endl;
    };
    void getData()
    {
        cout << id << endl;
    }
};

/*DERIVED CLASS
syntax:
class {{derived-class_name}}:{{ visibility-mode}} {{base-class-name}}
{
    /* default visibility mode is private
     puplic visibility mode : public member of the base class becomes public members of the derived class
     private visibility mode : public member of the base class becomes private members of the derived class
     private members are never inherited


    class/memebers/methods
}*/

class Programmer : public Employee
{
public:
    int langcode;
    Programmer(int inpId) : Employee(inpId)
    {
        // id = inpId;
        //--> we can't do it,try to access the private member of base class
        langcode = 8;
    }
};
int main()
{
    // Employee laxman(1), lax(45);
    Programmer skillup(100);
    cout << skillup.langcode;
    // skillup.getData();
    skillup.getData();

    return 0;
}
