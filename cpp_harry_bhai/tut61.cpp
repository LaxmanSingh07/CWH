#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    
    ofstream lout("tut60.txt"); //---> lout is connecting to  output stream
    string name; // creatring a name string and taking input form the using 
    cin>>name;

    //writing a string to the file 
    lout<<name;

    lout.close(); //----> link in disconnected 

    ifstream lin("tut60.txt");
    string content;
    lin>>content;


    cout<<"The content of this file is "<<content<<endl;
    lin.close();
    
    return 0;
}