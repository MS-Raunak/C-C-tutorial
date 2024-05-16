#include<iostream>
using namespace std;
int main()
{
	int n,temp,r,sum=0;
	cout<<"Enter any number:";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	
	if(sum==temp)
	{
		cout<<temp<<" "<< "is a Palindrome Number"<<endl;
	}
	else{
		cout<<temp<<" "<<"is Not a Plindrome Number";
	}
}
