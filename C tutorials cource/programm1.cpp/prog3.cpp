#include<iostream>
using namespace std;
class TwoNum
{
    private: 
    int x,y;
    public: 
    void GetValues()
        {
            cout<<"Enter two number:";
            cin>>x>>y;
        }
        void PutValues()
        {
            cout<<"x="<<x<<endl<<"y="<<y<<endl;
        }
        void Add()
        {
            int z=x+y;
            cout<<x<<"+"<<y<<"="<<z<<endl;
        }
        void Multiply()
        {
            int z=x*y;
            cout<<x<<"x"<<y<<"="<<z<<endl;
        }
        void swap()
        {
            int t=x;
            x=y;
            y=t;
            cout<<"x="<<x<<endl<<"y="<<y<<endl;
        }
        void Max()
        {   int max=0;
            if(x>y)
            {
                cout<<x<<"is Maximum Number"<<endl;
                max=1;
            }
            if(max==0)
            {
                cout<<"Not a maximum number"<<endl;
            }
        }
        void Min()
        {
            if(x>y)
            {
                cout<<y<<"is Minimum Number"<<endl;
            }
        }

};
int main()
{
    TwoNum N;
    N.GetValues();
    N.PutValues();
    N.Add();
    N.Multiply();
    N.swap();
    N.Max();
    N.Min();
}