#include<iostream>
using namespace std;


//forward delcaration
class complex; //---> insure compiler that it is guranted that class is defined 
class Calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumRealComplex(complex o1,complex o2);
    int sumCompComplex(complex o1,complex o2);
    //you will get an error if you will try to defined the funciton in the same scope 
      
    
};
class complex{
    // Individually delcaring functions as friends 
    // friend int Calculator ::sumRealComplex(complex,complex);
    // friend int Calculator ::sumCompComplex(complex,complex);

    // alter: Declaring the entire calculator class as friend
    friend class Calculator;
    int a;
    int b;
    public:
    void setData(int a1,int b1){
        a=a1;
        b=b1;
    }

 
    void printNumber(){
        cout<<"your complex no is "<<a<<"+"<<b<<"i"<<" "<<endl;
    }
};


int  Calculator::sumRealComplex(complex o1,complex o2){
    return(o1.a+o2.a);
}
int  Calculator::sumCompComplex(complex o1,complex o2){
    return(o1.b+o2.b);
}
int main()
{
    complex o1,o2;
    o1.setData(3,4);
    o1.printNumber();
    o2.setData(5,6);
    o2.printNumber();

    Calculator clac;
    int res=clac.sumRealComplex(o1,o2);
    cout<<"Sum of real part of   "<<res<<endl;
    res=clac.sumCompComplex(o1,o2);
    cout<<"Sum of complex part of   "<<res<<endl;
    
    return 0;
}