#include<iostream>
using namespace std;
void table(int n)
{
    int i=1,t;
    while(i<=10)
    {
        t=n*i;
        cout<<n<<"X"<<i<<"="<<t<<endl;
        i++;
    }
}
int main()
{
    for(int i=1; i<=5; i++)
        {
            table(i);
        }
}