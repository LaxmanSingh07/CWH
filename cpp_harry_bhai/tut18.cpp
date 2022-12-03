//recursion  ----> in cpp

#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);

}

int thefibonacci(int n){
    if(n==1||n==2){
        return 1;
    }
    return thefibonacci(n-2)+thefibonacci(n-1);
}

int main()
{
    //factroial on number ;
    // 6*5*4*3*2*1 =720
    //6*factof(5)
    //factof(4)*5
    int m;
    cout<<"Enter the value of m ";
    cin>>m;
    m=fact(m);
    cout<<m;

    int n;
    cout<<"Enter term";
    cin>>n;
    cout<<thefibonacci(n);

    return 0;
}