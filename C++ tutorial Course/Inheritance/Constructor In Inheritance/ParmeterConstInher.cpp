// Calling Parameterized Constructor

#include<iostream>
using namespace std;
class Base
{ public:
	Base()
	{ cout<<"Base Version"<<endl;
	}
   Base(int x)
   { cout<<"Base Version:"<<x<<endl;
	   }	
 Base(int x,int y,int z)
   { cout<<"Base Version:"<<x<<","<<y<<","<<z<<endl;
	   }	
	   
};

class Derive:public Base
{ public:
  Derive():Base(100,200,300)
	{ cout<<"Derive Version"<<endl;
	}
 Derive(int x,int y):Base(x)
   { cout<<"Derive Version:"<<x<<","<<y<<endl;
	   }		
};

int main()
{ Derive D1;
  Derive D2(10,20);
 }

