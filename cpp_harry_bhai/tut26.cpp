#include <iostream>
using namespace std;
// friend function
class complex
{
private:
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "YOur number is " << a << "+" << b << "i" << endl;
    }
    // Below line means that non member - sumComplex function is allowed to do access and manipulate anything with all the private member
    friend complex sumComplex(complex o1, complex o2);
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber(o1.a + o2.a, o1.b + o2.b);
    
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();
    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/* properties of friend functions
1. Not in the scope of class
2. since itt is not in the scope of the class, it can't be called form the object of that class c1.sumComples()==Invalid

3. can be invoked without the help of any object ;
4. usually contains the objects as atgumnets

5. can be declared in the private or public section of the class

6. it can't access the members directly by their nmes and need objec_name.member_name to access any member .
*/