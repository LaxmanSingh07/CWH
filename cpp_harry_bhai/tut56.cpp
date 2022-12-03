// virtual fucntions in cpp if we want that the function of derived class will be used then
#include<iostream>
using namespace std;
class Base
{
public:
    int var1=1;
    virtual void display()
    {
        cout << "Displaying Base class variable var1  " << var1 << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived=2;
   void display()
    {
        cout << "1 Displaying Base class variable var1 " << var1 << endl;
        cout << "2 Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    Base* base_ptr;
    Derived obj_deri;
    base_ptr= &obj_deri;
    base_ptr->display();

    
    return 0;
}