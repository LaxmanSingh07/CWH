// copy constructors
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    // when no copy constructor is found, compiler supplies its own copy constructors

    Number(Number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a; // z1.a=x.a
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, z2, y, z(45);
    x.display();
    y.display();
    z.display();

    // z1 should exactily resemble z or x or y
    Number z1(x); // copy constructor involked

    z2 = z;        ///---> copy constructor not  called
    Number z3 = z; ///---> copy constructor invoked you are
    z1.display();
    z2.display();
    z3.display();

    return 0;
}