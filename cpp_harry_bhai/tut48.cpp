#include <iostream>
using namespace std;
/*
CASE1:
    class B:public A{
`       // Order of execution of constructor first A then B
    };
*/

/*
Class A: public B,public C
{
`       // Order of execution of constructor first A then B
--------------> B() then c() and A()

}
*/

/*
case 3:
class A: public B,virtual public c{
`       // Order of execution of constructor
------------> C() then B() and A()

};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor is called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class Derived : public Base2, public Base1
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a) ///----> if we change order here then there is no effect on constructor calling
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called" << endl;
    }
    void printData(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    Derived laxman(1, 2, 3, 4);
    laxman.printDataBase1();
    laxman.printDataBase2();
    laxman.printData();

    return 0;
}