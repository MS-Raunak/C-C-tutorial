#include<iostream>
using namespace std;
class twoNum
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
        int sumDigit()
        {
            int sum=0,m;
            while(n>0)
            {
                  m=n%10;
                sum=sum+m;
                n=n/10;
            } return(sum);
        }
};
int main()
{
    twoNum T;
    T.getValue();
    T.showValue();
    int SD=T.sumDigit();
    cout<<"Sum:"<<SD<<endl;
}