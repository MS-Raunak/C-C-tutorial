#include<iostream>
using namespace std;
int main()
{
    int l,b,ar,p;
    cout<<"Enter the length & bredth of rectangle:";
    cin>>l>>b;
    ar=l*b;
    cout<<"Area of Rectangle is "<<ar<<endl;
    p=2*(l+b);
    cout<<"Perimeter of Rectangle is "<<p;
}