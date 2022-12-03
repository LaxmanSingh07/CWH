//file in cpp

#include<iostream>
#include<fstream>
using namespace std;

/*the useful classes for working with files in cpp are :
1. fstreambase
2. ifstream----> derived from fstreambase
3. ofstream----> derived from fstreambase
*/

// In order to work with files in cpp, you will have to open it .
// there are2 ways to opean a file (mainly)
// 1. using the consructor 
// 2. using the member function open() of the class


int main()
{

    //opening file using constructor
    // and writing it 
// string s="LAXMAN bhai";
//     ofstream out("tut60.txt"); // write operation in a file 
//     out<<s;

    
    //opening file using constructor
    // and reading it 
string s2;
    ifstream in("tut60_a.txt"); // write operation in a file 
    // in>>s2;     // it will teminate when it encounter blank space or end of file 
    getline(in,s2); // it will terminate when it encounter any new line or end of file 

    cout<<s2;

    
    return 0;
}