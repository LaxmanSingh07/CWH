#include <iostream>
using namespace std;
template <class T>
class Vector
{
public:
    T *arr;
    int size;

public:
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // Vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // Vector v2(3);

    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    Vector<float>v1(3);
     v1.arr[0] = 4.34;
    v1.arr[1] = 3.12;
    v1.arr[2] = 1.1;

    Vector <float>v2(3);

    v2.arr[0] = 15.5;
    v2.arr[1] = 25.5;
    v2.arr[2] = 2.12;
    cout << v1.dotproduct(v2);
    return 0;
}
