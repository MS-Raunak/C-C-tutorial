#include<iostream>
using namespace std;
class twoNum
{
    private:
        int x,y;
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
    public:
        void getValues()
        {
            cout<<"Enter x:";
            cin>>x;
            cout<<"Enter y:";
            cin>>y;
        }
        void showValues()
        {
            cout<<"x:"<<x<<endl;
             cout<<"y:"<<y<<endl;
        }
        void calculation()
        {
            int a=add();
            cout<<"add:"<<a<<endl;
            int m=max();
            cout<<"maximum value:"<<m<<endl;
        }
        void swap()
        {
            int t;
            t=x;
            x=y;
            y=t;
        }
};
int main()
{
    twoNum T;
    T.getValues();
    T.showValues();
    T.calculation();
    T.swap();
    T.showValues();
}
