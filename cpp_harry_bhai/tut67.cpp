// function templates & function templates with parameters
#include<iostream>
using namespace std;
// float funcAverage(int a ,int b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }
// float funcAverage(int a  b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }

template <class T>
void Swap(T &a, T &b)  //swap is pre-defined
{
    T temp=a;
    a=b;
    b=temp;
}
// template<class T1,class T2>
// float funcAverage(T1 a ,T2 b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }
int main()
{
    // float a=funcAverage(4,5);
    // float b=funcAverage(4.5f,34.56f);
    // cout<<a<<endl;
    // cout<<b<<endl;
    int x=5;
    int y=34;
    cout<<"Before swap"<<endl;
    cout<<x<<" "<<y<<endl;
    Swap (x,y);
    cout<<"Aftert swap"<<endl;
    cout<<x<<" "<<y<<endl;
    
    return 0;
}