//program to insert record in file
#include "employee.h"
int main()
{ Employee E;
  fstream F;
   int id,found=0;
  F.open("employee.db",ios::in|ios::binary);
  if(F==NULL)
  {cout<<"File Not Found...."<<endl;
  }
  else
  {  cout<<"Enter Employee Id U Want to Search?";
     cin>>id;
  
     cout<<"ID\t\tName\t\tSalary"<<endl;
     cout<<"---------------------------------------"<<endl;
  	 while(!F.eof())
  	 { F.read((char*)&E,sizeof(E));
  	   if(F.eof()){break;}
  	   found=E.search(id);
  	   if(found){
  	   E.putEmployee();
		 break;
		 }
  	   }
  	   if(!found)
  	   {cout<<"RECORD NOT FOUND....";
		 }
  }
  
  F.close();
	
}

