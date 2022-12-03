// list in cpp stl
// bidirectional
#include <iostream>
#include <list>
using namespace std;

// template <class T>//----> i am not able to use it i don't know why?
void display(list<int> &list1)
{
    list<int>::iterator it;
    for (it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of zero length

    list1.push_back(34);
    list1.push_back(1);
    list1.push_back(12);
    list1.push_back(12);
    list1.push_back(52);
    list1.push_back(13);
    list1.push_back(12);
    list1.push_back(12);
    list1.push_back(9);

    list1.pop_front(); // it is used to remove the elements form the fron of the list

    // removing element form the list
    list1.pop_back();
    list1.pop_back();
    list1.remove(7); // it is used to remove the particular value
    // if you have one element for than one times and you perform the remove operation then all the occurence will delete
    // list1.remove(12);
    // list<int>::iterator iter;
    // iter = list1.begin(); // referejce of first element of list
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;

    // cout<<*iter<<" ";

    // sorting the list
    // list1.sort();
    display(list1);
    list<int> list2(3); // empty list of size 7

    list<int>::iterator it;
    it = list2.begin();
    *it = 45;
    it++;
    *it = 432;
    it++;
    *it = 3456;
    it++;
    display(list2);

    // merging of two list
    list1.merge(list2);

    cout << "LIST 1 After merging" << endl;
    list1.sort();
    display(list1);

    // reverse the list
    list1.reverse();
    display(list1);
    return 0;
}