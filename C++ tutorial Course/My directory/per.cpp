#include<iostream>
using namespace std;
int sum(int x,int y, int z)
{
   int k;
   k=x+y+z;
   return(k); 
}
int main()
{
   
    int a,b,c,d;
    
    d=sum(a,b,c);
    d=sum(70,60,100);
    cout<<"d="<<d;
}