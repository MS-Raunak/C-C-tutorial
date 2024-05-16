#include<iostream>
using namespace std;
int largerNo(int num1, int num2, int num3)
{
    int k;
    if(num1>num2 && num1>num3)
   {
       k=num1;
   }
    else if(num2>num1 && num2>num3)
   {
       k=num2;
   }
  
   else 
   {
       k=num3;
       
   }return k;
   
}
int main()
{
    int k,n1,n2,n3;
    cout<<"Enter three Numbers:";
    cin>>n1>>n2>>n3;
    k=largerNo(n1,n2,n3);
    cout<<"Larger No:"<<k<<endl;
   // k=largerNo(4,5,6);
    cout<<"Larger No:"<<k;
}