#include<iostream>
using namespace std;
class Bank
{
    private:
        int acno;
        char name[30];
        int balance;
        static int bankbalance;
    public:
        void openAccount()
        {
            cout<<"Enter Account Number:";
            cin>>acno;
            cout<<"Account Holder Name:";
            cin>>name;
            cout<<"Enter Balance:";
            cin>>balance;
            bankbalance+=balance;
        }
        void showAccount()
        {
            cout<<"Account Number:"<<acno<<endl;
            cout<<"Account Holder Name:"<<name<<endl;
            cout<<"Account Balance"<<balance<<endl;
        }
        static void showBankBalance()
        {
            cout<<"Bank Balance:"<<bankbalance;
        }
};
int Bank::bankbalance;
int main()
{
    Bank B[3];
    int i;
    for(i=0; i<=2; i++)
    {
        B[i].openAccount();
    }
    for(i=0; i<=2; i++)
    {
        B[i].showAccount();
    }
    Bank::showBankBalance();
}