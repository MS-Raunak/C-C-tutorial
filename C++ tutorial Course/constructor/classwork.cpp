/*class Date
{
  private:
  int d,m,y;
  default set date 1/1/2020
  parameterized assign Datecopy constructor add one year 
  in a date                                             
}                                                         */

#include<iostream>
using namespace std;
class Date
{ private:
	 int d,m,y;
  public:
  Date()
   {
   d=1,m=1,y=2020;
   }
   
  Date(int d,int m,int y)
   {
   	this->d=d;
     this->m=m;
     this->y=y;
   }	
  	
  Date(Date &T)
   {
   	 d=T.d;
      m=T.m;
      y=T.y+1;
    }	
   
   void getNumber()
   { cout<<"Enter date:";
     cin>>d;
     cout<<"Enter Month:";
     cin>>m;
     cout<<"Enter Year:";
     cin>>y;
  	}	 
  	void putNumber()
	{
        cout<<d<<"/"<<m<<"/"<<y<<endl;
        
	}	
};

int main()
{ 
 Date D1;	 //call default constructor
 D1.putNumber();

 Date D2(4,5,2003); //call parameterized constructor
 D2.putNumber();
 
Date D3=D1;      //call copy constructor
//or Date D3(D1);
D3.putNumber();
}