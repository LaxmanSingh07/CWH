//SINGLE INHERITANCE DEEP DIVE : 
#include <iostream>
using namespace std;
class Base
{
    int data1; // private by default and is not inheritable 
    public:
        int data2;

        void setData();
        int  getData1();
        int  getData2();

};

void Base::setData(void){
    data1=48;
    data2=23;
}

int Base::getData1(void){
    return data1;
}

int Base::getData2(void){
    return data2;
}

class Derived: public Base  //----> class is being derived Publically 
{
    int data3;
    public:
        void process();
        void display();
};

void Derived::process(void){
    setData();
    data3=data2*getData1();

}

void Derived::display(){
    cout<<"valueof data 1 is"<<getData1()<<endl;
    cout<<"valueof data 2 is"<<data2<<endl;
    cout<<"valueof data 3 is"<<data3<<endl;
}

int main()
{

Derived der; //---> object is of derived class 
// der.setData();
der.process();
der.display();

    return 0;
}
