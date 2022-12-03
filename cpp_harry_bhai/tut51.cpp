#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    void getData()
    {

        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << img << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        img = b;
    }
};
int main()
{
    // Complex c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(1, 3);
    // (*ptr).getData(); // precedence of . >  *
    ptr->setData(34, 23456); //(arrow operator (->) is same as that of (*p).)
    ptr->getData();

    // array of object 

    Complex *lax=new Complex[4];
    lax->setData(23,45);
    lax->getData();

    return 0;
    

}