//parameterized and Default Constructors in cpp
#include<iostream>
using namespace std;
class Complex
{
    
    int a, b;

public:
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }

    Complex(int ,int ); //-----> this is known as parameterized constructor 

};

Complex::Complex(int x,int y) //---> This is a default constructros as it takes parameters 
{
    a = x;
    b = y;
    cout << "automatically"<<endl;
    printNumber();
}
int main()
{
    //Implict call 
    Complex a(4,6);

    //Explicit call
     
    Complex b=Complex(5,7);
    
    return 0;
}