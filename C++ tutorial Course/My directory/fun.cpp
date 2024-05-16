//check that perfact or not. 
#include<iostream>
using namespace std;
int isperfect(int n) 
{                      
    //Perfect=Any number whose sum and product are equal is known as Perfect number.[EX:312]
    //312=[(3+1+2=6)&&(3*1*2)]
    
    int s=0,p=1,r;
    while(n) //n=31
    {
       r=n%10;//r=2=>3
       s=s+r; //s=0+2=2=>6
       p=p*r; //p=1*2=2=>6
       n=n/10; //n=31%10=3
    }
    if(s==p)
    {
        return(1); //if here is exit is any value then exited here
    }
    else
   {
        return(0);
   }
}
int main()
{    int num;
cout<<"Enter a Number:";
cin>>num;
    if(isperfect(num))  //if(isperfect(312))=>we can also write this type.
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