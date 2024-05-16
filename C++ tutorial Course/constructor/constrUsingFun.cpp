#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        Date()                  //default constructor calling
        {
             d=1,m=01,y=2020;
        }
        Date(int d,int m,int y)  //parametrized constructor calling
        {
            this->d=d;
            this->m=m;
            this->y=y;
        }
        Date(Date &T)               //copy constructor calling
        {
            d=T.d;
            m=T.m;
            y=T.y+1;
        }

        void getDate()
        {
            cout<<"Enter Date:";
            cin>>d;
            cout<<"Enter Month:";
            cin>>m;
            cout<<"Enter Year:";
            cin>>y;
        }
        void putDate()
        {
            cout<<d<<"/"<<m<<"/"<<y<<endl;
        }
};
int main()
{
    Date D1;  //default Constructor
    D1.putDate();

    Date D2(20,06,2000);
    D2.putDate();

    Date D3;
    D3=D1;
    D3.putDate();

    Date D4;
    D4.getDate();
    D4.putDate();
}