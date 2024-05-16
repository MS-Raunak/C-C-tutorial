#include<iostream>
using namespace std;
class Time
{
	private:
		int hrs,min,sec,d;
	public:
		void getTime()
		{
			cout<<"Enter Hours:";
			cin>>hrs;
			cout<<"Enter Minutes:";
			cin>>min;
			cout<<"Enter Seconds:";
			cin>>sec;
		}
		void showTime()
		{
		     cout<<"Day:"<<"Hours:"<<"Minutes:"<<"Seconds:"<<"::>>>"<<d<<":"<<hrs<<":"<<min<<":"<<sec<<endl;
		}
        void add(Time &,Time &);
};
void Time::add(Time &T1, Time &T2)
{
	sec=T1.sec+T2.sec;
	min=sec/60;
	sec=sec%60;
	min=min+T1.min+T2.min;
	hrs=min/60;
	min=min%60;
	hrs=hrs+T1.hrs+T2.hrs;
	d=hrs/24;
	hrs=hrs%24;
    d=d+T1.d+T2.d;
}
int main()
{
	Time T1,T2,T3;
	T1.getTime();
	T2.getTime();
	T3.add(T1,T2);
	T3.showTime();
}
