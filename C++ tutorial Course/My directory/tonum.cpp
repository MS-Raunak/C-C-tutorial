#include<iostream>
using namespace std;
class twoNum
{
    private:
        int x,y;
    public:
        void getValues()
        {
            cout<<"Enter Two Number:";
            cin>>x>>y;
        }
        void showValues()
        {
            cout<<"x:"<<x<<"\n"<<"y:"<<y<<endl;
        }
        int add()
        {
            int c=x+y;
            return(c);
        }
        int max()
        {
            if(x>y)
            {
                return(x);
            }
            else
            {
                return(y);
            }
        }
        void swap()
        {
           int t=x;
            x=y;//x=10
           y=t;//y=12
        }
};
int main()
{
    twoNum T;
    T.getValues();
    T.showValues();
    int a=T.add();
    cout<<"Sum:"<<a<<endl;
    int m=T.max();
    cout<<m<<" is maximum value"<<endl;
    T.swap();
    T.showValues();
}