// functions objects (functors )

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function objects Function wrapped in a class so that it is available like an object
    // function object is also known as functor
    int arr[] = {1, 78, 11, 100, 12, 77};
    sort(arr, arr + 5);
    sort(arr, arr + 6,greater<int>());
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}

