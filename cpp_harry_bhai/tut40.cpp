//multilevel Inheritance deep dive 

#include<iostream>
using namespace std;
class Student
{   
    protected:
        int roll_no;
    public:
        void set_no(int );
        void get_no(void );


};
void Student::set_no(int r){
    roll_no=r;

}
void Student::get_no(void){
    cout<<"The roll number is "<<endl<<roll_no<<endl;
}

class Exam:public Student
{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);

};

void Exam::set_marks(float m1, float m2)
{
    maths=m1;
    physics=m2;
}

void Exam::get_marks(void){
    cout<<"The marks of obtained in physics is "<<physics<<endl;
    cout<<"The marks of obtained in maths is "<<maths<<endl;

}

class result: public Exam
{
    float percentage;
    public:
         void display(void);

};
void result::display(void)
{   
    get_no();
    get_marks();
    cout<<"Your percentage is "<<(maths+physics)*0.5<<"%"<<endl;
}

int main()
{
    /*
     if we are inherting b from a and c from b; [a----->b--->c] 
        1. a is the base class for b abd b is the base class of c 
        2. abc is called inheritance path 
        

    */
    result laxman;
    laxman.set_no(30);
    laxman.set_marks(99.99f,94.6f);

    laxman.display();

    return 0;
}