// inline function in cpp
#include <iostream>
using namespace std;
// inline int product(int a, int b)
// {
//     return a * b;
// }
int product(int a, int b)
{
    static int c = 0; // it will intilize at once then it wil retain that value
    c = c + 1;
    return a * b + c;
}

// default arguments

float moneyReceived(int currmoney, int factor = 1.04f)
{
    return currmoney * factor;
}
int main()
{
    // int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is"
    //      << " " << product(a, b) << endl;
    // cout << "The product of a and b is"
    //      << " " << product(a, b) << endl;
    // cout << "The product of a and b is"
    //      << " " << product(a, b) << endl;

    cout << moneyReceived(10000) << endl;
    cout << moneyReceived(10000, 1.1);

    // line function reduce the cost----> it will change the function call to function defination at compile time
    // don't use inline function in case of recursion
    // don't use static variale in case of inline function
    // a function became inline or not it all depends on your compiler 
    

    return 0;
}