#include<iostream>
using namespace std;
class Student
{ private:
    int rollno;
    char name[30];
    int p,c,m;
 public:
   void getStudent()
   { cout<<"Enter Roll Number:";cin>>rollno;
     cout<<"Enter Name:";cin>>name;
     cout<<"Enter Physics Marks:";cin>>p;
     cout<<"Enter Chemistry Marks:";cin>>c;
     cout<<"Enter Maths Marks:";cin>>m;
   }
   void putStudent()
      { cout<<"Roll Number:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Physics Marks:"<<p<<endl;
        cout<<"Chemistry Marks:"<<c<<endl;
        cout<<"Maths Marks:"<<m<<endl;
      }
      int search(int);
};
int Student::search(int r)
{
    if(rollno==r)
    {return(1);}
    return(0);
}

int main()
{ Student S[3];
  int i;
  for(i=0;i<=2;i++)
  {
  S[i].getStudent(); 
  }
  int r,found=0;
  cout<<"Enter Roll Number that you want to search?";
  cin>>r;
  
  for(i=0;i<=2;i++)
    {
    found=S[i].search(r); 
    if(found)
    { S[i].putStudent();
    break;
    }
    }
    if(!found)
    {
        cout<<"Roll Number Not Exist...."<<r;
    }

}
