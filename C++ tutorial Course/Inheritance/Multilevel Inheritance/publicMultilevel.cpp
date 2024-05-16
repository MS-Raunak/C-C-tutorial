/*  Multilevel Inheritance
             Student
                |
               Bsc
                |
              Result */

//Multilevel Inheritance with public mode            
#include<iostream>
using namespace std;
class Student
{
    private:
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
class Bsc:private Student
{
    private:
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
        int getTotal()
        {
            return(p+c+m);
        }
};
class Result: public Bsc
{
    private:
       int totalmarks;
    public:
        void getResult()
        {
            getBsc();
            totalmarks=getTotal();
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