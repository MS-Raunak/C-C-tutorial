/*copy constructor
=====================
to initiate one object with another object at the time of object declaration

Properties of constructors
1] special number fubction have same name as class name
*/

/*
 in C                     in c++
int a;                 Number a;
a=10                   a.getNumber();  
int a=10;               to do the use constructor 
int a=10,b=a;              "            
int a,b=20;                

Example of Default constructor/Pararmeterized constructor/Overloaded constructor  */
#include<iostream>
using namespace std;
class Number
{ private:
	 int n;
  public:
   Number(){
   n=100;
   }
   
   Number(int n){
   	this->n=n;
   }	
  	
   Number(Number &T)
   {
   	 n=T.n*10;
	   }	
   
   void getNumber()
   { cout<<"Enter Number:";
     cin>>n;
  		}	 
  	void putNumber()
	{ cout<<n<<endl;
		  }	
};

int main()
{ 
 Number N(900); 
 //call parameterized constructor	
 N.putNumber();

 Number M; 
 //call default constructor
 M.putNumber();
 
 Number K(89);
 //possible only when constructor contain single parameter Number K=89; will not work when class have Copy Constructor
 K.putNumber();

 Number P=K;
 //Call Copy Constructor or Number P(K)
 P.putNumber();

 Number  Y;
 //default
 
 Y=K;
 //will not call copy construvtor
 Y.putNumber();
}