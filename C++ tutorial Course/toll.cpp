#include<iostream>
#include<string.h>
using namespace std;

class TollRoad
{
	private:
		
		int vid;
		char vtype[30];
		int price;
		static int lvtotal;
		static int lvtotalprice;
		static int hvtotal;
		static int hvtotalprice;
		static int gvtotal;
		static int netamount;
		
	public:
	
	    void getValue()
	    {
	    	cout<<"Enter Vehicle Id:";
	    	cin>>vid;
	    	cout<<"Enter Vehicle Type:";
	    	cin>>vtype;
	    	cout<<"Enter Vehicle Toll Cahrge:";
	    	cin>>price;
	    	
	    	int count=0;
	    	
	    	if(strcmpi(vtype,"LV")==0)
	    	{
	    		count+=lvtotal;
	    		lvtotalprice+=price;
			}
			else if(strcmpi(vtype,"HV")==0)
			{
				count+=hvtotal;
				hvtotalprice+=price;
			}
			else if(strcmpi(vtype,"GV")==0)
			{
			    count+=gvtotal;
    		}
			
			netamount+=price;
		}
		
		void putValue()
		{
			cout<<"Vehicle Id:"<<vid<<endl;
			cout<<"Vehicle Type:"<<vtype<<endl;
			cout<<"Vehicle Price:"<<price<<"-/"<<endl;		
		}
		
		static void showLv()
		{
			cout<<"Total LV Vehicle:"<<lvtotal<<endl;
			cout<<"Total LV Price:"<<lvtotalprice<<endl;
		}
		
		static void showHv()
		{
			cout<<"Total HV Vehicle:"<<hvtotal<<endl;
			cout<<"Total HV Price:"<<hvtotalprice<<endl;
		}
		
		static void showGv()
		{
			cout<<"Total GV Vehicle:"<<gvtotal<<endl;
		}
		
		static void showNetAmount()
		{
			cout<<"Net Amount:"<<netamount<<"-/"<<endl;
		}
};

int TollRoad::lvtotal;
int TollRoad::lvtotalprice;
int TollRoad::hvtotal;
int TollRoad::hvtotalprice;
int TollRoad::gvtotal;
int TollRoad::netamount;

int main()
{
	TollRoad T[4];
	int i;
	
	for(i=0;i<=3;i++)
	{
		T[i].getValue();
	}
	
	for(i=0;i<=3;i++)
	{
		T[i].putValue();
	}
	
	TollRoad::showLv();
	TollRoad::showHv();
	TollRoad::showGv();
	TollRoad::showNetAmount();}
