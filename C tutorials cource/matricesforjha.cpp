#include<iostream>
using namespace std;
int main()
{
    int m1[3][3],m2[3][3],i,j,m3[3][3];
    cout<<"\n Enter first matrix Elements:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<" ";
            cin>>m1[i][j];
        }
    }
    cout<<"\nEnter second matrix Elements:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<" ";
            cin>>m2[i][j];
        }
    }
    cout<<"\n Sum of two matrices:\n\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}