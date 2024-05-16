#include<iostream>
using namespace std;
class Num
{
    private:
        int n;
    public:
        void getValue()
        {
            cout<<"Enter Number:";
            cin>>n;
        }
        void showValue()
        {
            cout<<"n:"<<n<<endl;
        }
        long fact();
};
long Num::fact()
{
          long f=1;
          int t=n;
        while(t>1)
        {
            f=f*t;
            t--;
        }return(f);
}
int main()
{
    Num T;
    T.getValue();
    T.showValue();
    long fact=T.fact();
    cout<<"Factorial:"<<fact<<endl;
    T.showValue();
}