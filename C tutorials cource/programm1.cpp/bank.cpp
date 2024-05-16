#include<iostream>
using namespace std;
class Bank
{
    private:
      int acno;
      char name[30];
      long balance;
    public:
      void openAccount()
 {
     cout<<"Enter Acount NO:"<<endl;
     cin>>acno;
     cout<<"Enter Name:"<<endl;
     cin>>name;
     cout<<"Enter Balance:"<<endl;
     cin>>balance;

 }   
 void showAccount()
 {
     cout<<"Account NO"<<acno<<endl;
     cout<<"Name"<<name<<endl;
     cout<<"Balance"<<balance<<endl;
 }  
 void Deposit()
 {
     long amt;
     cout<<"Enter Deposit Amount:"<<endl;
     cin>>amt;
     balance=balance+amt;
     cout<<"Total Amount"<<"="<<balance<<endl;
     
     
 }  
 void Withrwal()
 {
     long amt;
     cout<<"Enter withrawal amount:"<<endl;
     cin>>amt;
 if(balance>=amt)
     {         balance=balance-amt;
        	  cout<<"Total amount:"<<balance<<endl;
     }
     else
     {
         cout<<"Less Balance...";
     }
 }   
 
};
int main()
{
    Bank c;
    c.openAccount();
    c.showAccount();
    c.Deposit();
    c.Withrwal();
}

