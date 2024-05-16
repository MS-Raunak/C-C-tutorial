#include<iostream>
using namespace std;
class Flight
{
    private:
        int flightNo;
        string destination;
        float distance,fuel;
        float CALFUEL()
        { float b;
          
          if(distance>0 && distance<=1000)
          {
            return(b=500);
          }
          else if(distance>1000 && distance<=2000)
          {
            return(b=1100);
          }
          else
          {
            return(b=2200);
          }
          
        }
      public:
        void FEEDINFO()
        {
          cout<<"Enter Flight Number:";
          cin>>flightNo;
          cout<<"Enter Destination:";
          cin>>destination;
          cout<<"Enter Distance:";
          cin>>distance;
        }
        void SHOWINFO()
        {
          cout<<"Flight No:"<<flightNo<<endl;
          cout<<"Destination:"<<destination<<endl;
          cout<<"Distance:"<<distance<<endl;
          float k=CALFUEL();
          cout<<"Fuel Price:"<<k<<"rs"<<endl;
        }
};
int main()
{
  Flight F;
  F.FEEDINFO();
  F.SHOWINFO();
}