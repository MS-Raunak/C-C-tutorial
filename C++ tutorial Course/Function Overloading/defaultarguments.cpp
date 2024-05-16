/*default arguments:
================= 
int sum(int x,int y,int z)  these are compulsury arguments
{
    int s=x+y+z;
    return(s);
}                 

#include<iostream>
using namespace std;
int sum(int x,int y,int z)  //these are compulsury arguments
{
    int s=x+y+z;
    return(s);
}
int main()
{
    int s=sum(10,20,30); //we cant as int s=sum(10,20);
    cout<<s<<endl;
}       
#include<iostream>
using namespace std;
int sum(int x,int y,int z=0)  //these are compulsury arguments
{
    int s=x+y+z;
    return(s);
}
int main()
{
    int s=sum(10,20); //we cant as int s=sum(10,20);
    cout<<s<<endl;
}      
#include<iostream>
using namespace std;
int sum(int x,int y,int z=100)  //these are compulsury arguments
{
    int s=x+y+z;
    return(s);
}
int main()
{
    int s=sum(10,20,30); //we cant as int s=sum(10,20);
    cout<<s<<endl;
     s=sum(10,20); //we cant as int s=sum(10,20);
    cout<<s<<endl;
}    
#include<iostream>
using namespace std;
int sum(int x,int y=10,int z=100)  //these are compulsury arguments
{
    int s=x+y+z;
    return(s);
}
int main()
{
    int s=sum(10,20); //we cant as int s=sum(10,20);
    cout<<s<<endl;
      s=sum(10,20,30); //we cant as int s=sum(10,20);
    cout<<s<<endl;
     s=sum(10); //we cant as int s=sum(10,20);
    cout<<s<<endl;
}      */