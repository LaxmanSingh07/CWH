// multiple inheritance
#include <iostream>
using namespace std;

// Syntax of multiple inhertance
// class Derived: visibility_mode base1, visibility_mode base2
// {
//     class body of class "derived ";
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl
             << "The value of base2 is " << base2int << endl
             << "The value of base3 is " << base3int << endl;

        cout << "The sum of these values is " << base1int + base2int + base3int;
    }
};

// The inherted derived class will look something like this
//  Data member
//  base1int ----> protected
//  base2int----->protected
// member function:
// set_base1int()--->public
// set_base2int()--->public
// set_show()----->public

int main()
{

    Derived c;
    c.set_base1int(34);
    c.set_base2int(77);
    c.set_base3int(45);
    c.show();
    return 0;
}