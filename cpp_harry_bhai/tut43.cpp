// Ambiguity Resolution in Inheritance

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "how are you ?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "kaise ho ?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet(); // to resolve ambiguity we use scope resolution opertor
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World";
    }
};
class D : public B
{
    int a;
// public:
//     void say()
//     { // derived class will automatically resolve ambiguity by override
//         cout << "hello mere bhai";
//     }
};
int main()
{
    // Ambiguity 1
    /*
    Base1 obj1;
    obj1.greet();
    Base2 obj2;
    obj2.greet();
    Derived c;
    c.greet();
    */
    B b;
    b.say();
    D d;
    d.say();//---> if say() function is not present in Dervied class then Base class's fucntion is called 
    

    return 0;
}