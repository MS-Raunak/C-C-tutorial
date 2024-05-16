#include<iostream>
using namespace std;
int main()
{
    int *x,n,i;
    cout<<"Enter how many intigers you want to input:";
    cin>>n;
    x=new int[n];
    
    for(i=0; i<n; i++)
    {
        cout<<"Enter ["<<i<<"]:";
        cin>>x[i];
    }
     for(i=0; i<n; i++)
    {
        cout<<x[i]<<",";
    }
    delete x;
}