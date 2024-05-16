#include<iostream>
using namespace std;
class String
{ private:
    char x[30];
  public:
    void getString()
    {
        cout<<"Enter String:";
        cin.getline(x,30);
    }
    void putString()
    { 
        cout<<x<<endl;
    }
    int len();
    void copy(String&);
    String reverse();
};

void String::copy(String &T)
{ int i;
 for(i=0;x[i];i++)
 {
 T.x[i]=x[i];
 }
 T.x[i]=0; 
}

String String::reverse()
{ int j=0,L;
  String R;
  L=len()-1;
 for(;L>=0;L--)
 {
 R.x[j++]=x[L];
 }
 R.x[j]=0; 
 return(R);
}
int String::len()
{ int i;
   for(i=0;x[i];i++);
   return(i);

}

int main()
{
  String S1,S2,S3;
  S1.getString();
  S1.putString();
  int L=S1.len();
  cout<<"Length is:"<<L<<endl;
  S1.copy(S2);
  cout<<"To reverse of ";
  S2.putString();
   cout<<"is:";
  S3=S1.reverse();
  S3.putString();
  }


