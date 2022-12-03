//destructores 
#include<iostream>
using namespace std;
//Destructor neither takes an argument nor return any value 
int count=0;
class num
{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object member"<<count<<endl;
        }
//tilde sign is used in front of class name in case of destructors 

        ~num(){
            cout<<"This is the time when my destrucotr is called for object number"<<count<<endl;
            count--;

        }
};
int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating firts object "<<endl;
    num n1;
    {
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;

    }
    cout<<"back to main"<<endl;

    
    return 0;
}