/*  Multilevel Inheritance
             Student
                |
               Bsc
                |
              Result */

//Multilevel Inheritance with protected mode            
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
class Bsc:private Student  //it means the private member of Student is private in class Bsc
{
    protected: /*in this class private member of student are share with protected member
     of class Bsc  and no need to create a extra function*/
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
class Result:public Bsc
{ private:
        int totalmarks;
    public:
        void getResult()
        {
            getBsc();
            totalmarks=p+c+m;
        }
        void putResult()
        {
            putBsc();
            cout<<"Total Marks:"<<totalmarks<<endl;
        }
};

int main()
{
   Result S;
    S.getResult();
    S.putResult();
    
}