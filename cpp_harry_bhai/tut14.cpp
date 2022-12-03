// struct union and enum in cpp
#include <iostream>
using namespace std;
// user defind data types

typedef struct employee
{
    int eid;
    char favChar;
    float Salary;

} e; //---> typdef is used to give the new name to existing data type


// UNION: is same of the struct ---> better memory management
// union uses only one field at a time (largest one)
// values will be overwrite in the union

union money
{
    int rice;
    char car;
    float pounds;
};
int main()
{
    e h;
    cout << sizeof(h) << endl;
    h.eid = 1234;
    h.favChar = 'A';
    h.Salary = 1234.567;
    cout << h.Salary << endl;
    cout << h.favChar << endl;
    cout << h.eid << endl;

    enum meal
    {
        breakfast,
        lunch,
        dinner
    };

    meal m1 = lunch;
    cout << m1 << endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}