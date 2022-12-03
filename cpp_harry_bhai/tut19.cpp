// function overloading in cpp
// overload means use the function for multiple work

// polymorphisam
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int sum(int a, int b)
{
    cout << "using function in two arguments " << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "using function in three arguments " << endl;
    return a + b + c;
}

//volume of a cylinder

double volume(double r,double h){
    return (3.14*r*r*h);
}

double volume(double a){
    return pow(a,3);
}

int main()
{
    // int n, m, z;
    // cout << "enter three numbrs";
    // cin >> n >> m >> z;
    // cout << endl;
    // cout << "sum of two number" << n << "and" << m << "is" << sum(n, m) << endl;
    // cout << "sum of three numbers" << n << "," << m << "and" << z << "is" << sum(n, m, z);
    double a;
    cout<<"Enter the side of the cube "<<endl;
    cin>>a;
    double r,h;
    cout<<"Enter the radius of the cylinder"<<endl;
    cin>>r;
    cout<<"Entr the height of cylinder"<<endl;
    cin>>h;
    cout<<"Volumne of cube"<<setw(6)<<volume(a)<<endl;
    cout<<"Volumne of cylinder"<<volume(r,h);
    return 0;
}