// call by value and call by reference
void swap(int a, int b)
{                 // temp a  b
    int temp = a; // 4    4  5
    a = b;        // 4    5  5
    b = a;        // 4    5  4
}

// call by reference using pointers
void refswap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using C++ reference

void refnewcpp(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers";
    cin >> num1 >> num2;
    cout << "Call by value" << endl;
    cout << "before swapping" << endl;
    cout << num1 << " " << num2<<endl;
    swap(num1, num2);
    cout << "After swapping" << endl;
    cout << num1 << " " << num2 << endl;

    cout << "call by reference " << endl;
    cout << "before swapping" << endl;
    cout << num1 << " " << num2<<endl;
    refswap(&num1, &num2);
    cout << "After swapping" << endl;
    cout << num1 << " " << num2 << endl;

    cout << "call by new reference feature " << endl;
    cout << "before swapping" << endl;
    cout << " " << num1 << " " << num2<<endl;
    refnewcpp(num1, num2);
    cout << "After swapping" << endl;
    cout << num1 << " " << num2;

    return 0;
}