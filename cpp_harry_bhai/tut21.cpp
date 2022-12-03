#include<iostream>
using namespace std;
// we can omit typedef in struct in cpp
class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
    void setdata(int a,int b,int c); //Declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};             


void Employee::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}


int main()
{
    Employee lax;
    lax.setdata(1,2,3);
    lax.d=34;
    lax.e=2344;
    //we can't access the private memeber of a class directly 
    //that's why we use the  funcation 
    // lax.a=123;
    //  error: 'int Employee::a' is private within this context
    return 0;
}