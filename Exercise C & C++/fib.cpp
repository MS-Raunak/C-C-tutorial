#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number:";
	cin>>num;
	int a=0,b=1,c;
	cout<<"Fibnocci Series ";
	for(int i=a; i<=num; i++)
	{
		cout<<a<<",";
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
