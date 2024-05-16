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
       TwoNum add(TwoNum); 
};
TwoNum TwoNum::add(TwoNum T)//error:-after the return the function not conqure any depending function
{
    TwoNum R;
    R.x=x+T.x;
    R.y=y+T.y;
    return(R);   //return function must be out of class.
}
int main()
{
    TwoNum T1,T2,T3;
    T1.getValues();
    T1.putValues();
    T2.getValues();
    T2.putValues();
    T3=T1.add(T2);  //T3.add(T1,T2);
    T3.putValues();
}