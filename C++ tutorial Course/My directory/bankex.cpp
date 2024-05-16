#include<iostream>
#include<string.h>
using namespace std;

class Bank
{ private:
	int acno;
	char name[30];
	int balance;
  public:
    void openAccount()
	{ cout<<"Enter Account Number:";cin>>acno;
	  cout<<"Enter Account Name:";cin>>name;
	  cout<<"Enter Account Balance:";cin>>balance;
		}	
	void showAccount()
	{ cout<<acno<<","<<name<<","<<balance<<endl;
		}	
	void deposit()
	{ int amt;
	  cout<<"Enter Amount U want to Deposit:";
	  cin>>amt;
	  balance+=amt;
	  
		}	

    void withdraw()
	{ int amt;
	  cout<<"Enter Amount U want to Withdraw:";
	  cin>>amt;
	  if(balance>=amt)
	  balance-=amt;
	  else
	  cout<<"Less Balance"<<endl;
		}	
    int search(int);
    int search(char *);

};
 int Bank::search(int ACNO)
 { if(acno==ACNO)
    return(1);
   else
    return(0);
 }

int Bank::search(char *n)
 { if(strcmpi(n,name)==0)
    return(1);
   else
    return(0);
 }

int main()
{ Bank C[3];
  	int i,ch,an,found,count=0;
  	char n[30];
  	for(i=0;i<=2;i++)
  	{
  		C[i].openAccount();
  	}
	do{
  		cout<<"Main Menu\n1]Show All Accounts\n2]Search By Account Number\n3]Deposit\n4]Withdrawal\n5]Search By Name\n6]EXit"<<endl;
  		cout<<"Ur Choice?";
  		cin>>ch;
  		switch(ch)
  		{ case 1:
     		for(i=0;i<=2;i++)
    		{
   	 			C[i].showAccount();
    		}
    		break;
			case 2:
			cout<<"Enter Account Number U Want to Serach?";
			cin>>an;
     		for(i=0;i<=2;i++)
    		{
   	 			found=C[i].search(an);
   	 			if(found){
				C[i].showAccount();
				break;}
    		}
   			if(!found)
   			{ 	cout<<"Record Not Found...."<<endl;
	   		}
			break;
			case 3:
			cout<<"Enter Account Number U Want to Serach for Deposit?";
			cin>>an;
     		for(i=0;i<=2;i++)
    		{
   	 			found=C[i].search(an);
   	 			if(found){
				C[i].showAccount();
				C[i].deposit();
				break;}
    		}
   			if(!found)
   			{ 	cout<<"Record Not Found...."<<endl;
	   		}
			break;
			case 4:
			cout<<"Enter Account Number U Want to Serach to Withdraw?";
			cin>>an;
     		for(i=0;i<=2;i++)
    		{
   	 			found=C[i].search(an);
   	 			if(found){
				C[i].showAccount();
				C[i].withdraw();
				break;}
    		}
   			if(!found)
   			{ cout<<"Record Not Found...."<<endl;
	   		}
			break;
			case 5:
 			cout<<"Enter Name U Want to Serach?";
			cin>>n;
     		for(i=0;i<=2;i++)
    		{
   				found=C[i].search(n);
   	 			if(found)
				{
					C[i].showAccount();
					count++;
				}
			}
   			if(count==0)
   			{ cout<<"Record Not Found...."<<endl;
	   		}
			else
			{ cout<<"Record Found...."<<count<<endl;
	   		}   
			break;
			case 6:
			cout<<"Good Bye"<<endl;
			break;
			default:
    		cout<<"Wrong Choice"<<endl;	
		}

	}while(ch!=6);
}
