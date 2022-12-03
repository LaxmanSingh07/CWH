

#include <iostream>
using namespace std;
/*
    Syntax for intialization list in Constructor:
    Constructor (argument-list): initilization-section
    {
        assignment+ other code ;
    }
    class Test {
        int a;
        int b;
        public:
            Test(int i,int j):a(i),b(j){} ----> it means a=i and b=j{constructor-body}
    }
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(j+i)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a+ j)
    // Test(int i, int j) : b(j), a(i + b) //----> RED Flag this will create problem because  a  will be intilaized first
    Test(int i, int j) : a(i)
    {
        b=j;
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b<< endl;
    }
};
int main()
{
    Test t(4, 5);
    return 0;
}