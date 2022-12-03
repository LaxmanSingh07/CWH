#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setData(int a1,int b1){
        a=a1;
        b=b1;
    }
    void setDatasum(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void printNumber(){
        cout<<"your complex no is "<<a<<"+"<<b<<"i"<<" "<<endl;
    }
};
int main()
    
{
    complex c1,c2,c3;
    c1.setData(3,4); 
    c1.printNumber();
    
    c2.setData(3,4); 
    c2.printNumber();

   c3.setDatasum(c1,c2);
    c3.printNumber();
    return 0;
}