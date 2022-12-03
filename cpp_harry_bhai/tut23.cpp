#include<iostream>
using namespace std;
//static members of a class means that it is comman to all 


class Shop{
    int itemId[10];
    int itemPrice[10];
    int counter;
    public:

        void initCounter(void){
            counter=0;
        }
        
        void SetPrice(void);
        void displayPrice(void);
};
void Shop::SetPrice(void){
    cout<<"Enter Id of your item no"<<counter+1<<" "<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item no"<<counter+1<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void){
    for(int i=0;i<counter;i++ )
        cout<<"The price of item with id "<<itemId[i]<<" is"<<itemPrice[i]<<" "<<endl;
}
int main()
{

Shop dukaan;
dukaan.initCounter();
dukaan.SetPrice();
dukaan.SetPrice();
dukaan.SetPrice();
dukaan.SetPrice();
dukaan.displayPrice();

return 0;
}