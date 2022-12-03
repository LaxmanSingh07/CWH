/*Pointers to Derived Classes in C++*/
#include <iostream>
using namespace std;
class Base
{
public:
    int var1;
    void display()
    {
        cout << "Displaying Base class variable var1  " << var1 << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var1 " << var1 << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    Base *base_ptr;
    Base obj_base;
    // Derived obj_deri;
    // base_ptr = &obj_deri; //pointing base class pointer to the derived class 

    // late binding: if we are pointing the base class pointer to obj of derived class then if you run the display() function , then fucntion of Base class will run it is known as late binding it depends upon the pointer of which class. 

    // base_ptr->var1 = 23;
    // base_ptr->display();

    // base_ptr->var_derived=123; // you can't do it 

    Derived * deri_ptr;
    // Base obj_base;
    // deri_ptr=&obj_base;
    Derived var;
    deri_ptr=&var;
    deri_ptr->var1=345;
    deri_ptr->var_derived=3;
    deri_ptr->display();

    // Derived * deri_ptr;
    // Base obj_base;
    // deri_ptr=&obj_base; //: invalid conversion from 'Base*' to 'Derived*
    // return 0;
}