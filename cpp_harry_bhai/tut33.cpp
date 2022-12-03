#include <iostream>
using namespace std;
class BankDeposit
{
    int prin;
    int years;
    float interestRate;
    float returnvalue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    prin = p;
    years = y;
    interestRate = r;
    returnvalue = prin;
    for (int i = 0; i < y; i++)
    {
        returnvalue *= (1 + interestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    prin = p;
    years = y;
    interestRate = float(r) / 100;
    returnvalue = prin;
    for (int i = 0; i < y; i++)
    {
        returnvalue *= (1 + interestRate);
    }
}
void BankDeposit::show()
{
    cout << endl
         << "Principal amount was" << prin << endl
         << " Return value after" << years << "years is " << returnvalue << endl;
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p,y and R";
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.show();
    // bd3.show();

    return 0;
}