#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;


//selection Control strcture if else
   /* if (age < 18 && age > 0)
    {
        cout << "You can't  come to my party" << endl;
    }
    else if (age <= 0)
    {
        cout << "you are not born yet";
    }
    else if (age == 18)
    {
        cout << "you are a kid and you will get a kid pass" << endl;
    }
    else
    {
        cout << "you can come to the party" << endl; //--> else condtion only execute when all the previous conditons become false
    }
*/


//selection control strcture : Switch case statments

switch (age)
{
case 18:
    cout<<"you are 18";
    break;
case 22:
    cout<<"you are 22";
    break;
case 2:
    cout<<"you are 2";
    break;

default:
    cout<<"no special cases ";
    break;
}


    return 0;
}