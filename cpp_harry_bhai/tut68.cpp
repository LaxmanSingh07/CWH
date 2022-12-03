// Memeber fucntion templates & overloading Template fucntions in cpp

#include <iostream>
using namespace std;
template <class T>
class bhai
{
public:
    T data;
    bhai(T data)
    {
        this->data = data;
    }
    void display();
};

template <class T>
void bhai<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "I AM FUNC 1" << endl;
    cout << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I AM FUNC 2" << endl;
    cout << a << endl;
}

int main()
{
    // bhai<int> l(45);
    // cout << l.data << endl;
    // l.display();
    func(4.56); // exact match highest prioprity

    return 0;
}
