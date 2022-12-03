#include <iostream>
using namespace std;
int glo = 234;
int main()
{
    int a = 4;
    int b = 5;
    char ch = 'c';
    cout << "This is tutorial 4" << endl;
    cout << "value of a is " << a << endl
         << "value of b is " << b;
    float pi = 3.1425;
    int glo = 123;
    cout << glo; // local variable has more precedence as comare to global variable

    cout << endl
         << "value of pi" << pi;
    cout << ch;

//     bool a1;
//     cout << a1; //---> by default value is zero
//     int k;
//     cout << k; //---> defautl value is zero

    
    return 0;
}