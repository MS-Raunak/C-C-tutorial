#include<iostream>
using namespace std;
class student
{
   private:
        int roll;
        char name[30];
        int  p,c,m,T,per;
  public:
        void setMarks()
    {
      cout<<"Enter Roll No:";
      cin>>roll;
      cout<<"Enter Name:";
      cin>>name;
      cout<<"Enter Physics marks:";
      cin>>p;
      cout<<"Enter Chemistry marks:";
      cin>>c;
      cout<<"Enter Math marks:";
      cin>>m;
      }
   void division()
   {
       float total=p+c+m;
       float per=total/3;
       cout<<"Total:"<<total<<endl;
       cout<<"Percentage:"<<per<<endl;
        if(per>=60 && per<100)
       {
           cout<<"First division"<<endl;
       }
       else if(per>=40 && per<60)
       {
           cout<<"Second division"<<endl;
       }
       else if(per>=30 && per<40)
       {
           cout<<"Third division"<<endl;
       }
       else
       {
           cout<<"Fail"<<endl;
       }
   }
   
    void showResult()
   {
      cout<<"Roll No:"<<roll<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"Physics marks:"<<p<<endl;
      cout<<"chemistry marks:"<<c<<endl;
      cout<<"Math marks:"<<m<<endl;
    }
   
};
int main()
{
      student s1;
      s1.setMarks();
      
      s1.showResult();
      s1.division();
}



