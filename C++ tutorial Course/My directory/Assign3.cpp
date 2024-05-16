#include<iostream>
using namespace std;
class batsman
{
    private:
        int bcode;
        char bname[20];
        int innings,notout,runs,batavg;
        int calcavg()
        {
            float batavg=runs/(innings-notout);
            return(batavg);
        }
    public:
        void readdata()
        {
            cout<<"Enter Batsman code:";
            cin>>bcode;
            cout<<"Enter Batsman Name:";
            cin>>bname;
            cout<<"Enter Total Innings:";
            cin>>innings;
            cout<<"Enter Total Notout:";
            cin>>notout;
            cout<<"Enter Total Runs:";
            cin>>runs;
        }
        void displaydata()
        {
            cout<<"Batsman code:"<<bcode<<endl;
            cout<<"Batsman Name:"<<bname<<endl;
            cout<<"Total Innings:"<<innings<<endl;
            cout<<"Total Notout Innings"<<notout<<endl;
            cout<<"Total Runs:"<<runs<<endl;
            int p=calcavg();
            cout<<"Batting Everage:"<<p<<endl;
        }
};
int main()
{
    batsman B;
    B.readdata();
    B.displaydata();
}