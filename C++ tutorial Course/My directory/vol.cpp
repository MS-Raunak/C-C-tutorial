#include<iostream>
using namespace std;
float volOfSphere(float n)
{
    float v; 
    v =(22*4*n*n*n)/7;
   return(v);
}
int main()
{
    float rad,k;
    cout<<"Enter Radius:";
    cin>>rad;
    k=volOfSphere(rad);
     cout<<k<<endl;
}
