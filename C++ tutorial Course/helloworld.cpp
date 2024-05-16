#include<iostream>
using namespace std;
class Bank
{
	private:
		int acno;
		char name[30];
		double balance;
	public:
		void openaccount()
		{
			cout<<"Enter Customer account number:";
			cin>>acno;
			cout<<"Enter Account Holder Name:";
			cin>>name;
			cout<<"Enter balance:";
			cin>>balance;
		}
		void showaccount()
		{
			cout<<"Account No:"<<acno<<endl;
			cout<<"Account Holder Name:"<<name<<endl;
			cout<<"Account Balance:"<<balance<<endl;
		}
		void deposit()
		{
			int amt;
			cout<<"Enter Amount You want to deposit:";
			cin>>amt;
			balance+=amt;
			cout<<"Total Balance:"<<balance<<endl;
		}
		void withrdawal()
		{
			int amt;
			cout<<"Enter Amount You want to deposit:";
			cin>>amt;
			if(amt<=balance)
			{
					balance-=amt;
			}
		
			cout<<"Remaining  Balance:"<<balance<<endl;
		
			else
			{
				cout<<"Less Balance...."<<endl;			
			}
		}
		int search(int);
};
int Bank::search(an)
{
	if(acno==an)
	return(0);
	return(1);
}
int main()
{
	Bank B[3];
	int i,ch,found=0,count=0,an;
	for(i=0; i<=2; i++)
	{
		B[i].openaccount();
	}
	do
	{
		cout<<"Main Menu\n1.Show All Accounts\n2.Search By Account No\n3.Deposit\n4.Withdrawal\n5.Exit"<<endl;
		cout<<"Press Any Key...";
		cin>>ch;
		switch(ch)
		{
		
			case 1:
			
			for(i=0; i<=2; i++)
			{
				B[i].showaccount();
			}
			break;
			case 2:
				cout<<"Enter Account Number You want to search:";
				cin>>an
				for(i=0; i<=2; i++)
				{
					found=B[i].search(an);
					if(found)
					B[i].showaccount();
					break;
				}
				if(!found)
				cout<<"Sorry Your Account Number does not Exit...."<<endl;
				case 3:
				cout<<"Enter Account Number You want to search:";
				cin>>an
				for(i=0; i<=2; i++)
				{
					found=B[i].search(an);
					if(found)
					B[i].showaccount();
					B[i].deposit();
					break;
				}
				if(!found)
				cout<<"Sorry Your Account Number does not Exit...."<<endl;
				break;
				case 4:
				cout<<"Enter Account Number You want to search:";
				cin>>an
				for(i=0; i<=2; i++)
				{
					found=B[i].search(an);
					if(found)
					B[i].showaccount();
					B[i].withrdawal()
					break;
				}
				if(!found)
				cout<<"Sorry Your Account Number does not Exit...."<<endl;
				break;
				case 5:
				cout<<"Exit..."<<endl;
				default:
				cout<<"Wrong Key press...."<<endl;
		}
			while(ch!=5);	
			
			
	}
}
