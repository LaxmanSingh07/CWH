// maps in cpp
//  it is used to store the key value pair
#include <iostream>
#include <map>
#include <string>
using namespace std;

// map is an associative array

int main()
{
    map<string, int> marksMap;
    marksMap["laxman"] = 98;
    marksMap["jack"] = 59;
    marksMap["Rohan"] = 59;
    marksMap.insert({{"kozume", 169}, {"kurro", 187.7}});
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    cout << "the size is:  " << marksMap.size()<<endl;
    cout<<" The max size is "<<marksMap.max_size();
    cout<<" empty function "<<marksMap.empty();

    return 0;
}