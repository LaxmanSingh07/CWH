#include<iostream>
using namespace std;


class Employee
{
    int id;
    int sal;
    public:
    void setId(void){
        sal=1123;
        cout<<"Enter id of employee"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"Id of employee is "<<id<<endl;
    }
    void getsal(void){
        cout<<sal<<endl;
    }

};
int main()
{
    // Employee lax,dosts,hai;
    // lax.setId();
    // lax.getid();

    Employee e1[10];
    for(int i=0;i<10;i++){
        e1[i].setId();
    }
    for(int i=0;i<10;i++){
        e1[i].getid();
        e1[i].getsal();
        
    }
    
    return 0;
}