//RAUNAK KUMAR//
#include<iostream>
using namespace std;
class Practical;
class Academic
{
  private:
    int roll,p,c,m;
   char name[30];
  public:
    void getAcademic()
        {
            cout<<"Enter Roll No:";
            cin>>roll;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Physics Marks:";
            cin>>p;
            cout<<"Enter Chemistry Marks:";
            cin>>c;
            cout<<"Enter Math Marks:";
            cin>>m;
           
        }
        void putAcademic()
        {   cout<<"Roll Number:"<<roll<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Physics Marks:"<<p<<endl;
            cout<<"Chemistry Marks:"<<c<<endl;
            cout<<"Math Marks:"<<m<<endl;
             float t=p+c+m;
            float per=t/3;
            cout<<"Total Marks:"<<t<<endl;
            cout<<"Percentage:"<<per<<endl;
            if(per>=60 && per<=100)
            {
              cout<<"First Division"<<endl;
            }
            else if(per>=40 && per<60)
            {
              cout<<"Second Division"<<endl;
            }
            else if(per>=30 && per<40)
            {
              cout<<"Third Division"<<endl;
            }
            else
            {
              cout<<"Fail"<<endl;
            }
        }
         friend void Result(Practical&,Academic&);
};
class Practical
{  private:
        int p,c,roll;
        char name[30];
    public:
        void getPractical()
        { 
            cout<<"Practical Marks..."<<endl;
            cout<<"Enter Roll Number:";
            cin>>roll;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Physics Marks[p]:";
            cin>>p;
            cout<<"Enter Chemistry Marks[p]:";
            cin>>c;
           
        }
        void putPractical()
        {
            cout<<"Practical[Physics]:"<<p<<endl;
            cout<<"Practical[Chemistry]:"<<c<<endl;
        }
         friend void Result(Practical&,Academic&);
    
};
void Result(Practical &prac, Academic &acad)  
{
 acad.p=acad.p+prac.p;
 acad.c=acad.c+prac.c;	
 acad.m=acad.m+0;
} 

int main()
{
  Academic acad;
  Practical prac;
  acad.getAcademic();
  acad.putAcademic();
  prac.getPractical();
  prac.putPractical();
  Result(prac,acad);
  acad.putAcademic();
}