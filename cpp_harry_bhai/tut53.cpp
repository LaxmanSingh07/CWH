//this pointer in cpp 
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    // A &setData(int a)

        void setData(int a ){
            this->a=a;   //this is a pointer in cpp which points to the object which invoked the member function 
            // this is used to return the object 
            // return this;
        }
        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};
int main()
{
    A m;
    m.setData(45);
    m.getData();
    return 0;
}