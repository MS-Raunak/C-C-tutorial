//add two string with space ex:string1=Raunak string2=Agrawal then string3=Raunak Agrawal
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
        char x[30];
    public:
        void getString()
        {  
            cout<<"Enter String:";
           cin>>x;
        }
        void putString()
        {
            cout<<"String:"<<x<<endl;
        }
        
        String add(String &);
};
String String::add(String &T)
{
    int i,j,L;
    String R;
    for(i=0; x[i]; i++)
    {
        R.x[i]=x[i];
    }
    R.x[i++]=32;
     for(j=0; x[j]; j++)
    {
        R.x[i++]=T.x[j];
    }
    R.x[i]=0;
    return(R);
}
int main()
{
    String S1,S2,S3;
    S1.getString();
    S2.getString();
    S3=S1.add(S2);
    S3.putString();
}