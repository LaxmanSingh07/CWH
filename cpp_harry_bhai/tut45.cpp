// Demonstrating Virtual Base Class
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int roll_no)
    {
        this->roll_no = roll_no;
    }
    void print_no(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student //----> we also can write public virtual that is also fine
{
protected:
    int maths;
    int physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "you have obtained " << endl
             << "Maths " << maths << endl
             << "Physics " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float score)
    {
        this->score = score;
    }
    void print_score(void)
    {
        cout << "Your pt score is " << score << endl;
    }
};


class Result : public Test, public Sports
{
private:
    float total;

public:
    void Display(void)
    {
        total = maths + physics + score;
        print_no();
        print_marks();
        print_score();
        cout << "youre total score is " << total << endl;
    }
};


int main()
{
    Result k;
    k.set_marks(99.4f, 90.78f);
    k.set_number(30);
    k.set_score(8.06);
    k.Display();
    return 0;
}