#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int t=x;
    x=y;
    y=t;
}
int main()
{
    int a=10,b=5;
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    swap(a,b);
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}