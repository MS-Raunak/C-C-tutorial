
//Another Program
#include<iostream>
using namespace std;
class String
{  private:
	 char x[30];
   public:
     void getString()
	 { cout<<"Enter String:";
	   cin>>x;
		  }	 
	void putString()
	{ cout<<x<<endl;
		  }	  
	void operator<<(String);	  
	
};
void String::operator<<(String T)
{ int i,j=0;   
for(i=0;T.x[i];i++);

for(i=i-1;i>=0;i--)
{
x[j++]=T.x[i];	
}
x[j]=0;	
}

int main()
{ String S1;
  S1.getString();
  String S2;
  S2<<S1; 
  //S2 call << S1 move as parameter
  S2.putString();	
}
