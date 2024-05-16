#include<iostream>
using namespace std;
class SBIndore;
class SBIndia
{
  private:
    long balance;
  public:
    void getBalance()
    {
      cout<<"Enter SBI Balance:";
      cin>>balance;
    }
    void putBalance()
    {
      cout<<"SBI Balance:"<<balance<<endl;
    }
    friend void RBI(SBIndore&,SBIndia&);    //using alias(&) for communication.
};

class SBIndore
{
  private:
    long balance;
  public:
    void getBalance()
    {
      cout<<"Enter SBIndore Balance:";
      cin>>balance;
    }
    void putBalance()
    {
      cout<<"SBIndore Balance:"<<balance<<endl;
    }
    friend void RBI(SBIndore&,SBIndia&);
};
void RBI(SBIndore &indr, SBIndia &ind)  
{
  ind.balance=ind.balance+indr.balance;	
  indr.balance=0;
} 

int main()
{
  SBIndia ind;
  SBIndore indr;
  ind.getBalance();
  ind.putBalance();
  indr.getBalance();
  indr.putBalance();
  RBI(indr,ind);
  ind.putBalance();
  indr.putBalance();
}