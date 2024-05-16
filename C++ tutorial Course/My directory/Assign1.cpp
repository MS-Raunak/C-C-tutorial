#include<iostream>
using namespace std;
class TwoNum
{
    private:
        int x,y;
        public:
        void getValues()
        {
            cout<<"Enter x:";
            cin>>x;
            cout<<"Enter Y:";
            cin>>y;
        }
        void  PutValues()
        {
            cout<<"x:"<<x<<"\n"<<"y:"<<y<<endl;
        }
        int add();
        int multiply();
        int swap();
        int max();
        int min();
};
int TwoNum::add()
{
    int c=x+y;
    return(c);
}
int TwoNum::multiply()
{
    int m=x*y;
    return(m);
}
int TwoNum::swap()
{
    int t=x;
        x=y;
        y=t;
    return(x,y);
}
int TwoNum::max()
{
    if(x>y)
        return(x);
    else
        return(y);
}
int TwoNum::min()
{
    if(x<y)
        return(x);
    else
        return(y);
}
int main()
{
    TwoNum T;
    T.getValues();
    T.PutValues();
    int a=T.add();
    cout<<"Sum:"<<a<<endl;
    int b=T.multiply();
    cout<<"Multiply:"<<b<<endl;
    cout<<"After Swapping..."<<endl;
    T.swap();
    T.PutValues();
    int j=T.max();
    cout<<"Maximum Value:"<<j<<endl;
    int v=T.min();
    cout<<"Minimum Value:"<<v<<endl;
}