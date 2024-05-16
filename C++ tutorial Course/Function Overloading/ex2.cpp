/*#include<iostream>
using namespace std;
int sum(int x,int y)  
{
    int k=x+y;
    return(k);
}

float sum(float x,float y)  // Total memory consume 16 bytes.(only one memory blocks)
{
   float j=x+y;
    return(j);
}                                //Note:Two types of numeric constants in c 1].int 2].double
int main()
{
  int k;
 k=sum(34,67);
  cout<<k<<endl;
  float j=sum(30.2,61.2);
  cout<<j<<endl;
  }It will be produce error bkg of diff type of function(int and float type) and same
number of pararmeter.




#include<iostream>
using namespace std;
int sum(int x,int y)  
{
    int k=x+y;
    return(k);
}

float sum(float x,float y)  // Total memory consume 16 bytes.(only one memory blocks)
{
   float j=x+y;
    return(j);
}                                //Note:Two types of numeric constants in c 1].int 2].double
int main()
{
  int k;
  k=sum(34,67);
  cout<<k<<endl;
  float j=sum(30.2f,61.2f);
  cout<<j<<endl;
}