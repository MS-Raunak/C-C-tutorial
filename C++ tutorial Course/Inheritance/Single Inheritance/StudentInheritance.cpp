//Single Inheritance(Public Mode)
#include<iostream>
using namespace std;
class Student
{ private:
	int rollno;
	string name;
  public:
     void getStudent()
	 { cout<<"Enter Roll Number:";
	   cin>>rollno;
	   cout<<"Enter Name:";
	   cin>>name;
		 }	
	void putStudent()
	{ cout<<"Roll Number:"<<rollno<<endl;
	  cout<<"Name:"<<name<<endl;
	 } 
};
class Bsc:public Student
{ private:
	 int p,c,m;
  public:
    void getBsc()
	{ getStudent(); 
	  cout<<"Enter Physics Marks:";
	  cin>>p; 
	  cout<<"Enter Chemistry Marks:";
	  cin>>c; 
	  cout<<"Enter Maths Marks:";
	  cin>>m; 
		  } 	 
   void putBsc()
   { putStudent(); 
   cout<<"Pysics:"<<p<<endl<<"Chemistry:"<<c<<endl<<"Maths:"<<m<<endl;
	   }	
};

int main()
{  Bsc S;
   /*By default derive class constructor(any) always
     invoke the base class default constructor implicitly*/
   //S.getStudent();
   S.getBsc();
   
   //S.putStudent();
   S.putBsc();  
	
}



