//procted Access Modifier in cpp

#include<iostream>
using namespace std;
class Base
{   
    
    protected: 
    int a;
    private:
    int b;

};

/*for a protected member
                      public derivation       private Derivation      Protected Derivation 

1.private members      Not Inherited           Not Inherited           Not inherited
2.protected members    proctected              private                 protected
3.public members       public                  private                 protected

*/
class Derived: protected Base
{
    
};

int main()
{
    Base b;
    Derived d;
    // d.a; // throw an error because it is protected 
    // d.b;// private member 
    return 0;
}