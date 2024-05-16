#include<iostream>
using namespace std;
int reverse(int c)
{
    int n,r,s=0;
      cout<<"Enter n:";
    cin>>n;
    while(n)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    } cout<<s;
   
    return(s);
}
int main()
{
    int n,k;
  
    k=reverse(n);
  
    
}