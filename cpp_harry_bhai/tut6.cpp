// there are two types of header files :
//  1. System header file:  It comes with the compiler
#include <iostream> //ctrl + click on header file
// 2. user defiend file:  it is written by the programmer
// #include"this.h"---> this will prdouce an erro if theis.h is not present n the current directory

// cpp reference

using namespace std;

int main()
{

    cout << "This is hello world program";
    cout << "operators in c++";

    cout << endl;
    cout << "following are the types of operators in c++" << endl;
    // Arithemetic opertor
    int a, b;
    cin >> a >> b;
    cout << "The value of a+b"
         << " " << a + b << " " << endl;
    cout << "The value of a-b"
         << " " << a - b << " " << endl;
    cout << "The value of a*b"
         << " " << a * b << " " << endl;
    cout << "The value of a/b"
         << " " << a / b << " " << endl;
    cout << "The value of a%b"
         << " " << a % b << " " << endl;
    cout << "The value of a++"
         << " " << a++ << " " << endl;
    cout << "The value of ++a"
         << " " << ++a << " " << endl;
    cout << "The value of b++"
         << " " << b++ << " " << endl;
    cout << "The value of ++b"
         << " " << ++b << " " << endl;
    cout << "The value of --a"
         << " " << --a << " " << endl;
    cout << "The value of a--"
         << " " << a-- << " " << endl;
    cout << "The value of --b"
         << " " << --b << " " << endl;
    cout << "The value of b--"
         << " " << b-- << " " << endl;

    // Assignment opertors in cpp: used to assign values ot
    int k = 4;
    int m = 12;
    char d = 'd';

    // Comparison operator:
    cout << "Comparsion Operator" << endl;
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a>b is  " << (a > b) << endl;
    cout << "The value of a<b is  " << (a < b) << endl;

    // logical operators

    cout << "logical operators " << endl;

    // and
    cout << "The value of this logical operation (a==b)&&(a>b)" << ((a == b) && (a > b)) << endl
        <<"main hun sktimaan";

    return 0;
}