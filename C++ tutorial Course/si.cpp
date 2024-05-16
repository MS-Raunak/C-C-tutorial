"Just Learning Again"

#include<iostream>
using namespace std;
int main()
{
	float si,p,t,r;
	cout<<"Enter Principal Amount:";
	
	cin>>p;
	cout<<"Enter Time:";
	cin>>t;
	cout<<"Enter Rate:";
	cin>>r;
	si=(p*t*r)/100;
	cout<<"Simple Intrest:"<<si;
}












//#include<iostream>
//using namespace std;
//{
//	float simple interest(float amt,float rate, float time);
//	float S;
//	S=(amt*rate*t)/100;
//	return(s);
//}
//int main()
//{
//	float SI, principal,r,t;
//	cout<<"Enter Principal Amount:"<<endl;
//	cin>>principal;
//	cout<<"Enter Rate:"<<endl;
//	cin>>r;
//	cout<<"Enter time:"<<endl;
//	cin>>t;
//	SI=simple interest(principal,r,t);
//	cout<<"Simple Interest:"<<SI;
//	SI=simple interest(15000,5,2);
//	cout<<"SI"<<SI<<endl;
//}
