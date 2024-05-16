#include<iostream>
using namespace std;
int main()
{
	int x,n,fact=1;
	cout<<"Enter the number to find factorial:";
	cin>>n;
	for(x=1; x<=n; x++)
	{
		fact=fact*x;
	}
	cout<<"Factorial:"<<fact;

}
