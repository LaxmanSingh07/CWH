#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    int x,y;
    public:
        Point(int x,int y){
            this->x=x;
            this->y=y;

        }
        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<" "<<") "<<endl;
        }
        friend double Distance(Point,Point);
};

//create a function which takes 2 point objects and computes the distancce between those points 
double Distance(Point a, Point b){
   return sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2)); 

}
int main()
{
    Point p(1,1);
    p.displayPoint();
    Point q(4,6);
    q.displayPoint();
    double k=Distance(p,q);
    cout<<k;
    return 0;
}