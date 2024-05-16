//Single Inheritance(Private Mode)
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
};
int main()
{
    Bsc S;
    /*By deafault derive class constructor(any) always invoke the base class
     default constructor implicitly.
     
     S.getStudent() will generate error beccause getStudent() is private in Bsc.    */
    S.getBsc();
    S.putBsc();
}