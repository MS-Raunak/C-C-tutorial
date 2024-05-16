#include<iostream>
using namespace std;
//#include <bits/stdc++.h> //only for reverse string
//#####  Swapping Without Third Variable  ######
//int main()
//{
//	int a,b;
//	cout<<"Enter Number1:";
//	cin>>a;
//	cout<<"Enter Number2:";
//	cin>>b;
//	cout<<"Number Before Swapping:"<<a<<b<<endl;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	cout<<"Number After Swapping:"<<a<<b;
//}

//#######  Palindrome Number  #############
//int main()
//{
//	int num,temp,remainder,reverse=0;
//	cout<<"Enter Number:";
//	cin>>num;
//	temp=num;
//	while(num>0)
//	{
//		remainder=num%10;
//		reverse=(reverse*10)+remainder;
//		num=num/10;
//	}
//	if(temp==reverse)
//	{
//		cout<<temp<<" is Palindrome Number"<<endl;
//	}
//	else
//	{
//		cout<<temp<<" Not Palindrome Number";
//	}
//	
//}


//#######  Reverse String  #############
//int main()
//{
//	string str;
//	cout<<"Enter String:";
//	cin>>str;
//	cout<<"Reverse String:";
//	for(int i=str.length()-1; i>=0; i--) 
//	{
//		cout<<str[i];
//	}
//	
//}


//##################### Fibonacci Series    ###########################
//int main()
//{
//	int n,a=0,b=1,c;
//	cout<<"Enter The Number:";
//	cin>>n;
//	cout<<"Fibonacci Series: ";
//	for(int i=a; i<=n; i++)
//	{
//		cout<<a<<" ";
//		c=a+b;
//		a=b;
//		b=c;
//	}
//	return 0;
//}

//######################## Prime Number #################################
//int main()
//{
//	int num,i,count=0;
//	cout<<"Enter the number:";
//	cin>>num;
//	for(i=1; i<=num; i++)
//	{
//		if(num%i==0)
//		count++;
//	}
//	if(count==2)
//	{
//		cout<<"Palindrome";
//	}
//	else{
//		cout<<"Not Palindrome";
//	}
//}

//######################## Perfact Number #################################
//int main()
//{
//	int num,i,sum=0;
//	cout<<"Enter The Number:";
//	cin>>num;
//	for(i=1; i<num; i++) //6=1+2+3
//	{
//		if(num%i==0)  //6/1=0, 6/2=0, 6/3=0
//		sum=sum+i;		//0+1=1, 1+2=3, 3+3=6
//	}
//	if(sum==num)
//	{
//		cout<<"Perfact Number";
//	}
//	else
//	{
//		cout<<"Not Perfact";
//	}
//}

//################## Creating a Object & class ############################
//class ClassName // ClassName is class
//{
////	by default private body
//	public:
//		void Call()
//		{
//			cout<<"Hello Interviewer!";
//		}
//};
//int main()
//{
//	ClassName TCS; //TCS is Object
//	TCS.Call();
//}
// ################ Add Two Number ###########
class Addition
{
	private:
	int num1,num2;
	public:
	void getNumber()
	{
		cout<<"Enter first & Second Number:";
		cin>>num1>>num2;
	}	
	void showNumber()
	{
		cout<<"Show Number:"<<num1<<","<<num2<<endl;
	}
	void sum()
	{
		int c;
		c=num1+num2;
		cout<<"Sum:"<<c;
	}
};
int main()
{
	Addition add;                                                            // restaurantzaika.epizy.com
	add.getNumber();
	add.showNumber();
	add.sum();
}


