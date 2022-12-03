// typecasting

#include <iostream>
int c = 1234;
using namespace std;
int main()
{

    //**********************Built in data types ******************/
    /* int a, b, c;
     cout << "Enter the value of a:" << endl;
     cin >> a;
     cout << "Ente the  value of b:" << endl;
     cin >> b;
     c = a + b;
     cout << c;

     // if you want to know the value of global variable then you can use the scope resolution operator
     cout<<::c;

     */

    /***********************float ,double and long double literals *************************************/
    /* float d = 34.4f; //-----> by default it act as a double

     long double e = 34.4l;
     cout << "The size of 34.4 is " << sizeof(34.4) << endl;
     cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
     cout << "The size of 34.4l is " << sizeof(34.4l) << endl;

     cout << "The value of d is " << d << endl;
     cout << "The value of 3 is " << e << endl;
 */

    /**********************************************Reference Variables*******************************/
    // Laxman---->lucky---->laxman sigh---->laxi
    // name different but reference same is known as the reference vairbles

    float v = 455;
    float &y = v; //-------> y is now reference variable

    cout << y << endl;
    cout << v;

    //*************************typecasting********************************/
    int t = 45;
    float b = 45.5;
    cout << "the value of t is " << (float)t<<endl;
    cout << "the value of t is " << float(t)<<endl;

    cout << "the value of t is " << (int)b<<endl;
    cout << "the value of t is " << int(b)<<endl;

    cout<<"the expression is "<<t+b<<endl;
    cout<<"the expression is "<<t+int(b)<<endl;
    cout<<"the expression is "<<t+(int)b<<endl;
    
}