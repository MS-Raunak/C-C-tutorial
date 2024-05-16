#include<iostream>
using namespace std;

class Player
{
	private:
		
	int playerid;
	char playername[30];
	int runs[5];
	
	public:
		
		void getPlayer()
		{
			cout<<"Enter Player Id:";
			cin>>playerid;
			cout<<"Enter Player Name:";
			cin>>playername;
			
			int i;
			for(i=0;i<=5;i++)
			{
				runs[i]=0;
			}
		}
		
		void showPlaySummary()
		{
			cout<<"Player Id:"<<playerid<<endl;
			cout<<"Player Name:"<<playername<<endl;
			
			int i;
			for(i=0;i<=5;i++)
			{
				if(i==5)
				{
				  cout<<"("<<i+1<<")"<<runs[i]<<endl;
				}
				else
				{
					cout<<"("<<i<<")"<<runs[i]<<endl;
				}  
			}
		}
		
		int countRuns()
		{
			int r,run[r];
			
			cout<<"Enter run:";
			cin>>r;
			
			if(r==6)
			{
			run[r-1]=run[r-1]+1;
		    }
		    else
		    {
		    	run[r]=run[r]+1;
			}
			return(r);
		}   
};

int main()
{
	Player P1;
    int i,r;
    
    P1.getPlayer();
    P1.showPlaySummary();
    
    for(i=0;i<=6;i++)
    {
    	r=P1.countRuns();
	}
}


