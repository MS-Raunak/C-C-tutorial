#include<iostream>
using namespace std;
class Bank
{
    private:
        int acno;
        char name[30];
        long bankBalance;
    public:
        void openAcount()
        {
            cout<<"Enter Acount No:";
            cin>>acno;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Bank Balance:";
            cin>>bankBalance;
        }
        void showAccount()
        {
            cout<<"Account No:"<<acno<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Bank Balance:"<<bankBalance<<endl;

        }
        void deposit()
        {
            long amt;
            cout<<"Enter deposit Amount:";
            cin>>amt;
            bankBalance=bankBalance+amt;
            cout<<"Bank Balance:"<<bankBalance<<endl;
        }
        void withrawal()
        {
            long amt;
            cout<<"Enter Withrawal Amount:";
            cin>>amt;
            if(bankBalance>=amt)
            {
                bankBalance=bankBalance-amt;
                cout<<"Bank Balance:"<<bankBalance<<endl;
            }
            else
            {
                cout<<"Less Balance....";
            }
            
        }
};
int main()
{
    Bank B1;
    B1.openAcount();
    B1.showAccount();
    B1.deposit();
    B1.withrawal();
}
