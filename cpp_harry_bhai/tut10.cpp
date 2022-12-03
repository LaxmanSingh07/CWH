// while, for and do while loop
#include <iostream>
using namespace std;
int main()
{

    /*there are three types loops in cpp
    1.for loop
    2.while loop
    3.do-while loop
    in cpp*/
    int n;
    cin >> n;

    // syntax for loop

    // for(initlization;condition;updation){
    //     loop body(cpp)
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " ";
    // }

    // example of infinite loop

    // for (int i = 0;;)
    // {
    //     cout << i;
    // }

    /* while loop in cpp
    //syntax */
    // while (/* condition */)
    // {
    //     /* code */
    // }

    // int i = 0;
    // while (i < n)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // infinte while loop
    // while (true)
    // {
    //     cout << "laxman bhai ";
    // }

    // do-while loop

    // do
    // {
    //     /* code */
    // } while (/* condition */);
    int i;
    // it will run at least once
    do
    {
        i = 10;
        cout << i;
    } while (i < n);

    int t;
    cout << "Enter the no for table ";
    cin >> t;
    for (int i = 1; i <= 10; i++)
    {
        cout << t << "*" << i << "=" << t * i << endl;
    }
    return 0;
}