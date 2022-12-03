// fucntion and function prototype in cpp
#include <iostream>
using namespace std;
//function prototype
//type function-name(arguments )
int sum(int ,int ); //---> this is known as the funcation prototype it is used to convey the compiler 

int main()
{
    int num1, num2;
    cout << "Enter first no";
    cin >> num1;
    cout << "Enter second no";
    cin >> num2;
    cout << sum(num1, num2); ///---> num1, num2 are actual parameters 

    return 0;
}

int sum(int a, int b)//---> a and b are formal parameters 
{
    int c = a + b;
    return c;
}