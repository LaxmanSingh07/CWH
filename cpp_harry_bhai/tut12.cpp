#include <iostream>
using namespace std;

int main()
{
    // what is pointer----> types of special variable which holds the address of other data types

    int a = 3;
    int *p = &a; //----> * indicates compiler that p is a pointer variable
    //& --> address of operators

    /* --->dereference operators
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a is "<<p<<endl;
    cout<<"address of a is "<<*(&p)<<endl;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*p<<endl;
    cout<<"The value of a is "<<*(&a)<<endl;
    */
    // chain of pointer in cpp
    int **p1 = &p;
    cout << **p1 << endl;
    cout << "address of p is" << p1 << endl;
    cout << "address of p is" << &p << endl;
    cout << "address of p is" <<*(&p1)<< endl;


    //value of a 

    cout<<"number"<<a<<endl;
    cout<<"number"<<*p<<endl;
    cout<<"number"<<**p1<<endl;
    
    return 0;
}