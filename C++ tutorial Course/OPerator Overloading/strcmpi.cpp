//19April2021
//Compare of two Strings
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
            cout<<x<<" ";
        }
        int operator>(String);
};
int String::operator>(String T)
{
    for(int i=0; x[i]; i++)
    {
        if(x[i]>T.x[i])
        {
            return(1);
        }
        else if(x[i]<T.x[i])
        {
            return(0);
        }
    }
    return(0);
}

int main()
{
    String S1,S2;
    S1.getString();
    S2.getString();
    if(S1>S2)
    {
        S1.putString();
        cout<<"Greater than";
        S2.putString();
    }
    else
     {
        S1.putString();
        cout<<"Not Greater than ";
        S2.putString();
    }

}