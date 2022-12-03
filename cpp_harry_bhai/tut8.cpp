#include <iostream>
#include <iomanip>
#define pi 3.14
using namespace std;

int main()
{
    // int a = 34;
    // cout << "The value of a was " << a << endl;
    // a = 45;
    // cout << "The value of a is " << a << endl;
    // // some time we required not to change the value of a particular vairable
    // // than we use const keyword
    // // constants in cpp
    // const int t = 234;
    // cout << t << endl;
    // // t=345; //---> error: Assignment of read only variable
    // cout << pi << endl; // it is different form const keyword

    // manipulatos in cpp : it is used to formate your data in general
    // like endl and setw
    // setw is used to set the field width
    int w = 23;
    cout << "The value of w is " << w << endl;            //--> without set w
    cout << "The value of w is " << setw(4) << w << endl; //----> with set w

    // operators precedence
    int a = 3;
    int b = 4, c = a * 5 + b;
    cout << c << endl;
}