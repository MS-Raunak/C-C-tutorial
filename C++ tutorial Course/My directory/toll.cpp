#include<iostream>
#include<string.h>
using namespace std;
class TollRoad
{
    private:
        int vechileId;
        char vtype[30]; 
        static int price;
        static int LVTotal;
        static int HVTotal;
        static int GVTotal;
        static int LVTotalAmount;
        static int HVTotalAmount;
        static int GVTotalAmount;
        static int netamount;
        int count=0;

    public:
        void getVehicle()
        {
            cout<<"Enter Vechile Id:";
            cin>>vechileId;
            cout<<"Enter Vechile Type:";
            cin>>vtype;
            cout<<"Enetr Toll Charge Of Vehicle:";
            cin>>price;
            {
              
                if(strcmpi(vtype,"LV")==0)
                LVTotal+=count;
                LVTotalAmount+=price;
            }
            if (strcmpi(vtype,"HV")==0)
            {
                HVTotal+=count;
                HVTotalAmount+=price;
            }
            if(strcmpi(vtype,"GV")==0)
            {
                GVTotal+=count;
                GVTotalAmount+=price;
            }   netamount+=price;
        }

        void putVehicle()
        {
            cout<<"Vechile Id:"<<vechileId<<endl;
            cout<<"Vechile Type:"<<vtype<<endl;
            cout<<"Toll Charge of Vehicle:"<<price<<endl;
        }
        static void showLVTotalAmount()
        {
            cout<<"Total Number of LV Type Vehicle:"<<LVTotal<<endl;
            cout<<"Total Amount of LV Vehicle:"<<LVTotalAmount<<endl;
        }
        static void showHVTotalAmount()
        {
            cout<<"Total Number of HV Type Vehicle:"<<HVTotal<<endl;
            cout<<"Total Amount of HV Vehicle:"<<HVTotalAmount<<endl;
        }
        static void showGVTotalAmount()
        {
            cout<<"Total Number of GV Type Vehicle:"<<GVTotal<<endl;
            cout<<"Total Amount of GV Vehicle:"<<GVTotalAmount<<endl;
        }
        static void showNetAmount()
        {
            cout<<"Net Amount:"<<netamount<<endl;
        }
        
};
int TollRoad::LVTotal;
int TollRoad::HVTotal;
int TollRoad::GVTotal;
int TollRoad::LVTotalAmount;
int TollRoad::HVTotalAmount;
int TollRoad::GVTotalAmount;

int main()
{
    TollRoad T[10];
    int i;
    for(i=0; i<=9; i++)
    {
        T[i].getVehicle();
    }
    for(i=0; i<=9; i++)
    {
        T[i].putVehicle();
    }
    TollRoad::showLVTotalAmount();
	TollRoad::showHVTotalAmount();
	TollRoad::showGVTotalAmount();
	TollRoad::showNetAmount();
}
