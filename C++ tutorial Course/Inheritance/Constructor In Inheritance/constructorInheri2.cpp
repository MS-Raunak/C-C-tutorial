// Constructor in inheritance

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
};

class Derive:public Base
{ public:
  Derive()
	{ cout<<"Derive Version"<<endl;
	}
 Derive(int x,int y)
   { cout<<"Derive Version:"<<x<<","<<y<<endl;
	   }		
};

int main()
{ Derive D1;
  Derive D2(100,200);
  //by default derive class constructor( any) always invoke the base class default constructor implicitly
    

}

