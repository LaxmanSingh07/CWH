#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public: 
        void read(void);
        void chk_bin(void);
        void ones(void);
        void Display(void);
};

void binary::read(void){
    cout<<"Enter a binary no"<<endl;
    cin>>s;
}
void binary::chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"Incorrect binary formate "<<endl;
            exit(0) ; //--> exit code with zero
        }
    }
}
void binary::ones(void){
       for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }

    }

}
void binary::Display(void){
    cout<<"Displaying your binary no "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    //OOPS : classes and objects 

    // C++ ---> Initially cllaed--> c with classes by Stroustroup
    // class---> extension of structures (in c)
    //structures had limitations 
    // ---> membrs are public:
    // ------> no method 

    // classes = structures + more
//  classes ---> can have method and properties 
// class have members like public,protect and private

    //structures in c++ are typdedefed 

    //you can declare onjects along with the class declartion 
    // class employee
    // {

    // }laxman,hai,vo

// you can't access private member directly





//nesting of member function

binary s;
s.read();
s.chk_bin();
s.Display();
s.ones();
s.Display();

    return 0;
}