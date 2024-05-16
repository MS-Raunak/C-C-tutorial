#include<iostream>
using namespace std;
int main()
{
	int A,B,C,D;
	int sA,sB,sC,sD;
	int divA,divB,divC,divD;
	int modA,modB,modC,modD;
	int mA,mB,mC,mD;
	
	cout<<"Enter Four Digits:"<<endl;
	cout<<"\nEnter Digits1:";
	cin>>A;
	cout<<"Enter Digits2:";
	cin>>B;
	cout<<"Enter Digits3:";
	cin>>C;
	cout<<"Enter Digits4:";
	cin>>D;
	
	sA=A+8;
	sB=B+8;
	sC=C+8;
	sD=D+8;
	
	cout<<"\nSum Value"<<endl;
	cout<<"a:"<<sA<<","<<"b:"<<sB<<","<<"c:"<<sC<<","<<"d:"<<sD<<endl;
	
	divA=sA/3;
	divB=sB/3;
	divC=sC/3;
	divD=sD/3;
	
	cout<<"\nDivision Value"<<endl;
	cout<<"a:"<<divA<<","<<"b:"<<divB<<","<<"c:"<<divC<<","<<"d:"<<divD<<endl;
	
	modA=divA%5;
	modB=divB%5;
	modC=divC%5;
	modD=divD%5;
	
	cout<<"\nModulas Value"<<endl;
	cout<<"a:"<<modA<<","<<"b:"<<modB<<","<<"c:"<<modC<<","<<"d:"<<modD<<endl;
	
	mA=modA*5;
	mB=modB*5;
	mC=modC*5;
	mD=modD*5;
	
	cout<<"\nFinal Result:"<<endl;
	cout<<"a:"<<mA<<","<<"b:"<<mB<<","<<"c:"<<mC<<","<<"d:"<<mD<<endl;


}
