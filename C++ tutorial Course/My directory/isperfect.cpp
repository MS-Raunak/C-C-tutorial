#include<iostream>
using namespace std;
class isPerfect
{
    private:
        int n;
    public:
        void getValue()
        {
            cout<<"Enter Value:";
            cin>>n;
        }
        void showValue()
        {
            cout<<"Value:"<<n<<endl;
        }
        int test()
        {
            int i,sum=0,m;
            for(i=1; i<1; i++)
            {
                m=n%i;
                if(m==0)
                {
                    sum=sum+i;
                }
            } 
            if(sum==n)
            {
                return(0);
            }
            else 
            {
                return(0);
            }
        }
};
int main()
{
    isPerfect P;
    P.getValue();
    P.showValue();
    int k=P.test();
    cout<<k<< "is perfect number"<<endl;
}