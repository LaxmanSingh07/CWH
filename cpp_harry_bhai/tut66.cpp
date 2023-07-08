//clas Templates with default parameters 

#include<iostream>
using namespace std;
template< class T1=int ,class T2=float,class T3=char>
class Laxman
{
    public:
        T1 a;
        T2 b;
        T3 C;
    Laxman(T1 a ,T2 b,T3 c){
        this->a=a;
        this->b=b;
        this->C=c;

    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of a is "<<b<<endl;
        cout<<"The value of c is "<<C<<endl;
    }
};

int main()
{
 Laxman<> a1(4,6.4,'c'); // but you have to use the angular bractets 
 a1.display();
 Laxman<float,char ,char> g(1.4,'c','d');
 g.display();
    return 0;
}