#include<iostream>

using namespace std;
int sum(int n)
{
    int s=0, i=1;
while(i<=n)
{
    s=s+i;
i++;
}
return(s);
}

int main()
{
     int s;
s=sum(25);
cout<<s<<endl;
}
