// open(),eof()---> function in cpp
#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("tut60.txt");
    out << "This is me";
    out.close();

    ifstream in;
    in.open("tut60.txt");
    string s1, s2;
    // in >> s1 >> s2;
    // cout << s1 << " " << s2;
    while (in.eof()==0)
    {
        getline(in,s1);
        cout<<s1<<endl;
    }
    
    in.close();
    return 0;
}