#include<iostream>
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
            cout<<x<<endl;
        }
        String operator+(String &);
};
String String::operator+(String &T)
{
    int i,j;
    String R;
    for(i=0; x[i]; i++)
    {
        R.x[i]=x[i];
    }
    R.x[i++]=32;
    for(j=0; T.x[j]; j++)
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
    S3=S1+S2;
    //S1 call the plus(+) operator and S2 move as parameter
    S3.putString();
}