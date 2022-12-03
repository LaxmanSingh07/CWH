#include<iostream>
using namespace std;

class Employee
{
    int id;
    // count is the stati data member of the class Employee
    static int count;
    public:
        void setData(void ){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of employee no"<<count<<"is"<<id<<endl;
            
            
        }
    //static function --> the fuction which only can access the static data members.

    //static function can be accessed without object 
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count=0;

//static variable is by default initlized by zero 
int main()
{
    Employee lax,roh,love;
    lax.setData();
    lax.getData();
    
    Employee::getCount();
    roh.setData();
    roh.getData();
    Employee::getCount();

    love.setData();
    love.getData();
    Employee::getCount();

    return 0;
}