#include<iostream>
using namespace std;
class Num
{
    private:
    int n;
    public:
    void getValue()
    {
        cout<<"Enter n:";
        cin>>n;
    }
    void putValue()
    {
        cout<<n<<endl;
    }
    int sum();
    
};
int Num::sum()
{
    int i=1,s=0;
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    return(s);
}
int main()
{
    Num N;
    N.getValue();
    N.putValue();
    int s=N.sum();
    cout<<s<<endl;
}