#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << a << endl
         << "The value of a is " << *ptr;

    // /* new keyword */ ---> dnyamic memory allocation
    int *p = new int(40);
    cout << "The value at address p is " << *(p) << endl;
    delete p;
    p = NULL;
    float *p1 = new float(40.38);
    cout << "The value at address p is " << *(p1) << endl;
    delete p1;
    p1 = NULL;
    p=new int [3];
    p[0]=10;
    p[1]=20;
    p[2]=30;
    cout<<p[0]<<endl<<p[1]<<endl<<p[2];

    // delete operator or keyword
        delete[] p;
        p=NULL;
    return 0;
}