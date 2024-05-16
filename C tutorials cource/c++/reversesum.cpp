#include<iostream>
using namespace std;
int isperfect(int n)
{
    int s=0,r,p=1;
    while(n)
    {
       r=n%10;
       s=s+r;
       
       p=p*r;
       n=n%10;
    }
    if(s==p)
    {
        return(1);
    }
    else
   {
        return(0);
   }
}
int main()
{
    if(isperfect(312))
    {
        cout<<"Perfect";
    }
    else
    {
        {
            cout<<"Not Perfect";
        }
    }
    
    
}