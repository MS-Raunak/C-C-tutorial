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
        cout<<"Enter account number:";
        cin>>acno;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Balance:";
        cin>>balance;
    }
    void showAccount()
    {
        cout<<"Account Number:\n"<<acno<<"Name:\n"<<name<<"Balance:\n"<<endl;
    }
    void deposit()
    {
        long amt;
        cout<<"Enter Amount You want to deposit:";
        cin>>amt;
        balance=balance+amt;
    }
     void withrawal()
    {
        long amt;
        cout<<"Enter Amount You want to withrawal:";
        cin>>amt;
        if(balance>=amt)
        balance=balance-amt;
        else
        {
            cout<<"Less Balance";
        }
    }
     int search(int);
};
int Bank::search(int an)
{
    if(acno==an)
    {
        showAccount();
        return(1);
    }
    else
    {
        return(0);
    }
    
}
int main()
{
    Bank C[3];
    int i,ch,an,found;
    for(i=0; i<=2; i++)
    {
        C[i].openAccount();
    }
    do
    {
        cout<<"Main Menu\n1]show All Account\n2]Show By Account Number\n3]Deposit\n4]Withrawal\n5]Exit\n";
        cout<<"Your Choice?";
        cin>>ch;
        switch(ch)
        {
        case 1:
            for(i=0; i<=2; i++)
            {
                C[i].showAccount();
            }
            break;
        case 2:
            cout<<"Enter Account Number you want to search?";
            cin>>an;
            found=0;
            for(i=0; i<=2; i++)
            {
                found=C[i].search(an);
                if(found)
                {
                    break;
                }

            }
            if(!found)
            {
                cout<<"Account Not Exist..."<<endl;
                
            }
            break;
        case 3:
            cout<<"Enter Account Number to deposit amount?";
            cin>>an;
            found=0;
            for(i=0; i<=2; i++)
            {
                found=C[i].search(an);
                if(found)
                {
                    C[i].deposit();
                    break;
                }

            }
            if(!found)
            {
                cout<<"Account Not Exist..."<<endl;
                
            }
            break;
        case 4:
            cout<<"Enter Account Number to withdraw amount?";
            cin>>an;
            found=0;
            for(i=0; i<=2; i++)
            {
                found=C[i].search(an);
                if(found)
                {
                    C[i].withrawal();
                    break;
                }

            }
            if(!found)
           {
                cout<<"Account Not Exist..."<<endl;
                
            }
            break;
        case 5:
            cout<<"Good Bye..."<<endl;
            break;
            default:
            cout<<"Wrong Option"<<endl;
          
        }
    } while (ch!=5);
    
}
