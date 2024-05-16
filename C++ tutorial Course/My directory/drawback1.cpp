#include<iostream>
#include<string.h>
using namespace std;

class Bank
{ private:
	int acno;
	char name[30];
	int balance;
	static int bankbalance;
	
  public:
	void openAccount()	
	{cout<<"Enter Customer Account Number:";
	cin>>acno;
	cout<<"Enter Customer Name:";
	cin>>name;
	cout<<"Enter Customer Account Balance:";
	cin>>balance;
	
	bankbalance+=balance;
	}
	void showAccount()
		{cout<<"Customer Account Number:"<<acno<<endl;
		cout<<"Customer Name:"<<name<<endl;
		cout<<"Customer Account Balance"<<balance<<endl;
		}
		void deposit()
		{int amt;
		cout<<"Enter Amount You Want To Deposit?";
	    cin>>amt;
		balance+=amt;
		
		bankbalance+=amt;
		}
		
		void withdraw()
		{int amt;
		cout<<"Enter Amount You Want To Withdrawal?";
		cin>>amt;
		balance-=amt;
		
		bankbalance-=amt;
		}
		
		static void showBankBalance()
		{
			cout<<"Bank Balance:"<<bankbalance<<endl;
		}
		
		int search(int);
		int seacrh(char*);
};
int Bank::search(int an)
{if(acno==an)
	return(1);
	else
	return(0);
}

int Bank::seacrh(char *n)
{if(strcmpi(n,name)==0)
	return(1);
	else
	return(0);
}

int Bank::bankbalance;

int main()
{	Bank C[3];
	int i,ch,an,found,count=0;
	char n[30];
	for(i=0;i<=2;i++)
	{
		C[i].openAccount();
	}
	do{
		cout<<"Main Menu\n1.Show All Accounts\n2.Search By Account Number\n3.Depoist\n4.Withdrawal\n5.Search By Name\n6.Exit"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;	
		switch(ch)
		{case 1:
		for(i=0;i<=2;i++)
		{
			C[i].showAccount();
		}
		Bank::showBankBalance();
		break;	
		case 2:
				
		cout<<"Enter Account Number You Want To Search?";
		cin>>an;
					
		for(i=0;i<=2;i++)
		{
			found=C[i].search(an);
			if(found){
			C[i].showAccount();
			break;}
		}
		if(!found)
		{cout<<"Record Not Found....."<<endl;
		}
		break;
		case 3:
		cout<<"Enter Account Number You Want to Deposit?";
		cin>>an;
		for(i=0;i<=2;i++)
		{
		found=C[i].search(an);
		if(found){
		C[i].showAccount();
		C[i].deposit();
		break;}
		}
		Bank::showBankBalance();
			    
		if(!found)
		{cout<<"Record Not Found....."<<endl;
		}
		break;
					
		case 4:		
		cout<<"Enter Account Number You Want to  Withdrawal?";
		cin>>an;	
		for(i=0;i<=2;i++)
		{found=C[i].search(an);
		if(found){
		C[i].showAccount();
	    C[i].withdraw();
		break;}
		}
		Bank::showBankBalance();
				
						
		if(!found)
		{	cout<<"Record Not Found....."<<endl;
		}
		break;
		case 5:
			
	    cout<<"Enter  Name You Want To Search?";
		cin>>n;
		for(i=0;i<=2;i++)
		{
		found=C[i].seacrh(n);
		    		
		if(found)
		{
		    C[i].showAccount();
		    count++;
		}
		}
		if(count==0)
		{
			cout<<"Record Not Found....."<<endl;
		}
					
		else
		{
			cout<<"Record Found....."<<count<<endl;	
		}
			break;
					
		case 6:
			
			  cout<<"Good Bye....."<<endl;
			  break;
			  default:
			  
			  cout<<"Wrong Choice";			
        }
    }
    while(ch!=6);
}
