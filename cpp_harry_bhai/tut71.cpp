// vector in cpp

#include <iostream>
#include <vector>

using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        cout << v.at(i) << endl;
    }
    cout << endl;
}
int main()
{
    // int size;
    // cout<<"Enter the size of the vector"<<endl;
    // cin>>size;
    // int ele;

    // ways to create a vector

    vector<int> v1; // zero length vector
    // vector<char> vec2(4);    // 4- element character vector from vec2
    // vector<char> vec3(vec2); // 4-element character vectro from vec2
    // vector<int> v(6, 3);     // 6-element vector of 3s

    //     for(int i=0;i<size;i++)
    //     {
    //         cout<<"Enter an element to add to this vector: ";
    //         cin>>ele;
    //         v1.push_back(ele);
    //     }

    //     display(v1);
    // // v1.pop_back();
    // vector<int>::iterator iter=v1.begin();
    //     // v1.insert(iter,536);
    //     v1.insert(iter,536); ///----> size copy of 536 will be added in the beginning of the vector
    // v1.insert(iter,5,536); ///----> it will insert the five copies of

    // display(v1);
    // display(vec2);
    // display(vec3);
    // display(v);

    // int size=5;
    // vector<int> v2={12,34,56,78,90};
    vector<int> vec4(4);
    vec4.push_back(10000000);
    cout << vec4.size() << endl;
    vec4.push_back(100000);
    cout << vec4.size() << endl;
    vec4.push_back(100000);
    cout << vec4.size() << endl;
    cout << vec4.size() << endl;

    return 0;
}
