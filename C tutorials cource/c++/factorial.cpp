#include<iostream>
using namespace std;
    long factorial(int n)
{
    long f=1;
    while(n>1)
    {
        f=f*n;
        n--;
    }
    return(f);
}
int main()
{
    long m,n;
    cout<<"enter n:";
    cin>>n;
    m=factorial(n);
    cout<<m<<endl;
}
