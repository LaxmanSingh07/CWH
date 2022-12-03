// Array of objects
#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void displayData(void)
    {
        cout << "Code of this item is " << id << endl
             << "Price of this item is " << price << endl;
        
    }
};

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    ShopItem* ptr= new ShopItem[size]; //----> allocate memory for size 
    
    // general store item
    // veggies item
    // hardware item
    int p;
    float q;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Id and price of item"<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p,q);
        (ptr+i)->setdata(p,q);

    }

    for(int j=0;j<size;j++){
        cout<<"item number: "<<j+1<<endl;
        (ptr+j)->displayData();
    }
    


    return 0;
}