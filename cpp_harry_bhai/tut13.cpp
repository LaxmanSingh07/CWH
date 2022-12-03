// Arrays in cpp
/* An array is collection of iteom of similer type sorted in contiguous memroy locations
Sometimes, a simple variable is not enought to hold all the data.
for ex, lets say we want ot store the marsk of 2500 students. having 2500 different variables */

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {23, 25, 46, 100};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl; //---> it will not throw any error rather it will execute it

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << endl;
    }

    // cpp pointer and array
    int *aptr = arr;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << *(aptr + i) << endl;
    }
    cout << *aptr++ << endl;

    return 0;
}