#include<iostream>
using namespace std;
class TwoNum
{
    private:
        int x,y;
    public:
        void getValues()
        {
            cout<<"Enter x:";  cin>>x;
            cout<<"Enter y:";  cin>>y;
        }
        void putValues()
        {
            cout<<"x:"<<x<<endl;
            cout<<"y:"<<y<<endl;
        }
        void add(TwoNum A, TwoNum B)
        {
            x=A.x+B.x;
            y=A.y+B.y;
        }
};
int main()
{
    TwoNum T1,T2,T3;
    T1.getValues();
    T1.putValues();
    T2.getValues();
    T2.putValues();
    T3.add(T1,T2);
    T3.putValues();
}