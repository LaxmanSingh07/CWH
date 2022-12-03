//exercise 

//create two classes 
// 1. SimpleCalulator --> takes input of two number using a utility function and performs 
// + - * /
// 2.scientificCalculator
    // performs any four scientific operation of your choicie


// 3. creater another class hybrdiance and inherit it using these 2 _LOCALE_CLASSES_H
// Q1. What type of inheritance are you using ?
// Q2. which modeof Inheritance are you using ?
// Q3. Create an object of HybridCalualtor and display results of simple and scientific calculator.
// Q4. How is code reuseability implemented ?

using namespace std;
#include<cmath>
#include<iostream>
class Simple
{
    protected:
        int x,y;
    public:
        void set(int ,int );
        void process(char );
};

void Simple::set(int x,int y){
    this->x=x;
    this->y=y;
}

void Simple::process(char choice)
{
    switch (choice)
    {
    case '+':
        cout<<"The addition is "<<x+y<<endl;
        break;
    case '-':
        cout<<"The Subtraction is "<<x-y<<endl;
        break;
    case '*':
        cout<<"The multiplication is "<<x*y<<endl;
        break;
    case '/':
        break;
    cout<<"The division is  "<<x/y<<endl;
    default:
        cout<<"Invalid Input";
    }

}
class Scientific
{
    protected:
        int x2,y2;
    public:
        void process(char );
        void set(int,int );
};

void Scientific::set(int x2,int y2)
{
    this->x2=x2;
    this->y2=y2;
}

void Scientific::process(char choice)
{
    switch (choice)
    {
    case 's':
        cout<<"Sine of first input "<<sin(x2)<<" sine of second input "<<sin(y2)<<endl;
        break;
    case '^':
        cout<<"Squre of first input "<<pow(x2,2)<<" Squre of second input "<<pow(y2,2)<<endl;
        break;
    case '@':
        cout<<"squre root of first input "<<sqrt(x2)<<" squre root of second input "<<sqrt(y2)<<endl;
        break;

    
    default:
        cout<<"not valid at all ";
        break;
    }
}

class Hybrid:public Simple,public Scientific
{
    public:
        void masterset(int ,int,char ,char );
};
void Hybrid::masterset(int a,int b,char first,char second)
{
    Simple::set(a,b);
    Scientific::set(a,b);
    Simple::process(first);
    Scientific::process(second);
}


int main()
{
    int p,q;
    char c,m;
    cout<<"Enter two values "<<endl
        <<"Enter two operators "<<endl;
    cin>>p>>q;
    cin>>c>>m;
    Hybrid l;
    l.masterset(p,q,c,m);
    return 0;
}