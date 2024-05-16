#include<iostream>
using namespace std;

class Time
{
	private:
		
		int hr,min,sec,d;
		
	public:
		
		void getTime()
		{
			cout<<"Enter Hours:";
			cin>>hr;
			cout<<"Enter Minutes:";
			cin>>min;
			cout<<"Enter Seconds:\n";
			cin>>sec;
		}
		
		void putTime()
		{
		     cout<<"Day:"<<"Horus:"<<"Minutes:"<<"Seconds:"<<d<<":"<<hr<<":"<<min<<":"<<sec<<endl;
		}
        
        void add(Time &,Time &);
};

void Time::add(Time &T1, Time &T2)
{
	sec=T1.sec+T2.sec;
	min=sec/60;
	sec=sec%60;
	min=min+T1.min+T2.min;
	hr=min/60;
	min=min%60;
	hr=hr+T1.hr+T2.hr;
	d=hr/24;
	hr=hr%24;
	
	
}

int main()
{
	Time T1,T2,T3;
	
	T1.getTime();
	T2.getTime();

	
	T3.add(T1,T2);
	T3.putTime();
}

