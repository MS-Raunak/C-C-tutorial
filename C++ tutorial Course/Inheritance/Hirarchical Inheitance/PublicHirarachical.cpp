/* Hirarchical Inheritance
             
             Student
              /  \  
            Bsc  Bcom               */

//Hirarchical Inheritance in public mode            
#include<iostream>
using namespace std;
class Student
{
    public:
        int rollno;
        string name;
    public:
        void getStudent()
        {
            cout<<"Enter Roll Number:";
            cin>>rollno;
            cout<<"Enter Name:";
            cin>>name;
        }
        void putStudent()
        {
            cout<<"Roll NO:"<<rollno<<"\nName:"<<name<<endl;
        }
};
class Bsc:public Student 
{   private:
        int p,c,m;
    public:
        void getBsc()
        {
            getStudent();
            cout<<"Enter Physics Marks:";
            cin>>p;
            cout<<"Enter Chemistry Marks:";
            cin>>c;
            cout<<"Enter Maths Marks:";
            cin>>m;
        }
        void putBsc()
        {
            putStudent();
            cout<<"Physics:"<<p<<"\nChemistry:"<<c<<"\nMaths:"<<m<<endl;
        }
};

class Bcom:public Student 
{   private:
        int bm,acc,eco;
    public:
        void getBcom()
        {
            getStudent();
            cout<<"Enter Business Management Marks:";
            cin>>bm;
            cout<<"Enter Accounts Marks:";
            cin>>acc;
            cout<<"Enter Economics Marks:";
            cin>>eco;
        }
        void putBcom()
        {
            putStudent();
            cout<<"Business Management:"<<bm<<"\nAccounts:"<<acc<<"\nEconomics:"<<eco<<endl;
        }
};

int main()
{
    cout<<"Bsc"<<endl;
    Bsc S;
    S.getBsc();
    S.putBsc();

    cout<<"Bcom"<<endl;
    Bcom C;
    C.getBcom();
    C.putBcom();
  
}