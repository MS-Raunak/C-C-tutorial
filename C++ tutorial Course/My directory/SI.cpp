#include<iostream>
using namespace std;
float simpleinterest(float amt,float rate,float time)
{
    float s;
    s=(amt*rate*time)/100;
    return(s);
}
int main()
{
    float result,x,y,z;
    cout<<"Enter Principal:";
    cin>>x;
    cout<<"Enter Rate:";
    cin>>y;
    cout<<"Enter Time:";
    cin>>z;
    result=simpleinterest(x,y,z);
    cout<<"CI="<<result;
}