#include<iostream>
#include<string.h>
using namespace std;

class Fortis
{
	private:
		
		int pid;
		char pname[30];
		char ptype[30];
		int pbill;
		static int totalbmamount;
		static int totalsmamount;
		static int totalacamount;
		
	public:
		
		void getPatient()
		{
			cout<<"Enter Patient Id:";
			cin>>pid;
			cout<<"Enter Patient Name:";
			cin>>pname;
		    cout<<"Enter Patient Type:";
		    cin>>ptype;
		    cout<<"Enter Patient Bill Amount:";
		    cin>>pbill;
		    
		    if(strcmpi(ptype,"BM")==0)
		    {
		    	totalbmamount+=pbill;
			}
			else if(strcmpi(ptype,"SM")==0)
			{
				pbill=pbill*20/100;
				
				totalsmamount+=pbill;
			}
			else if(strcmpi(ptype,"AC")==0)
			{
				
				if(pbill>500000)
			   {
				totalacamount+=pbill;
		     	}
			    else
			   {
				cout<<"No Bill Amount:";			
			    }
			}
		}
		
		void putPatient()
		{
			cout<<"Patient Id:"<<pid<<endl;
			cout<<"Patient Name:"<<pname<<endl;
			cout<<"Patient Type:"<<ptype<<endl;
			cout<<"Patient Bill Amount:"<<pbill<<endl;
		}
		
		static void showBmPatient()
		{
			cout<<"Total Bill Amount Of BM Patient:"<<totalbmamount<<endl;
		}
		
		static void showSmPatient()
		{
			cout<<"Total Bill Amount Of SM Patient:"<<totalsmamount<<endl;
		}
		
		static void showAcPatient()
		{
			cout<<"Total Bill Amount Of AC Patient:"<<totalacamount<<endl;
		}
};

int Fortis::totalsmamount;
int Fortis::totalbmamount;
int Fortis::totalacamount;
	
int main()
{
	Fortis P[5];
	int i;
	
	for(i=0;i<=4;i++)
	{
		P[i].getPatient();
	}
	
	for(i=0;i<=4;i++)
	{
		P[i].putPatient();
	}
	
	Fortis::showBmPatient();
	Fortis::showSmPatient();
	Fortis::showAcPatient();
}