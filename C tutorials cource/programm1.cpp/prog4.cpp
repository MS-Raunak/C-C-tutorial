#include<iostream>
using namespace std;
class TwoNum
{
    private:
    int x,y;
    int add()
    {   int c;
        c=x+y;
        return c;
    }
    int mul()
    {
        int c=x*y;
        return c;
    }
    public:
    
    void getValue()
    {
        cout<<"Enter Value of X and Y:";
        cin>>x>>y;
    }
    void putValue()
    {
        cout<<x<<","<<y<<endl;
    }
    void calculation()
    {
        int a=add();
        int m=mul();
        cout<<x<<"+"<<y<<"="<<a<<endl<<x<<"X"<<y<<"="<<m<<endl;
    }
    
};
int main()
{
    TwoNum T;
    T.getValue();
    T.putValue();
    T.calculation();
}
