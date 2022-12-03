// basic input/output & more

/* c++ comes with libraries which help us in performin input/output . IN cpp sequence of bytes corrresponding to input and output are commonly known as streams

    INPUT STREAM: Direction of flow of bytes takes place form input device to main memory
    OUTPUT STREAM: Direction of flow of bytes takes place from main memory to the output device */

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter two numbers :  "; /* this is called insertion operator */
    cin >> num1 >> num2;             /* this is called Extraction operator */
    cout << num1 << " " << num2 << endl;
    cout << "sum is " << num1 + num2;
    return 0;
}