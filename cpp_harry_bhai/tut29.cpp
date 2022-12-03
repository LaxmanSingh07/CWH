// constructors
#include <iostream>
using namespace std;
class Complex
{
    
    int a, b;

public:
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }

    // creating a costructors
    //  Constructor is the speacial member function with same name as of the class
    //  It is used to intilaize the objects of its clas
    // it is automatically invoked
    Complex(void); // constructor declaration

};

// this is a default constuctor 
Complex::Complex(void)// CONSTRUCTOR doesn't have any return type otherwise it will through an error 
{
    a = 0;
    b = 0;
    cout << "automatically"<<endl;
    printNumber();
}
int main()
{
    Complex c1,C2,C3;
 

    return 0;

}

//properties of constructors 

//1. it should be declared in the public section of the class
//2. They are automatically inivoked whenever the object is created 
//3. Don't have return type
//4. They can't return values 
//5. It can have default arguments 
//6. we can't refer to their address 