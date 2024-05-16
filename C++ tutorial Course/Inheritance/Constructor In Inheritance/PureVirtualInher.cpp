//Pure Virtual Class                                                                    

#include<iostream>
using namespace std;
class Student
{
    protected:
        int rollno;
        string name;
    public:
       virtual void get()=0;
       virtual void put()=0;
        
};
class Bsc:public Student
{
    private:
        int p,c,m;
    public:
        void get()
        {
            cout<<"Enter Roll No:";
            cin>>rollno;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Physics Marks:";
            cin>>p;
            cout<<"Enter Chemistry Marks:";
            cin>>c;
            cout<<"Enter Maths Marks:";
            cin>>m;
        }
        void put()
        {
            cout<<"Roll Number:"<<rollno<<"\nName:"<<name<<endl;
            cout<<"Physics:"<<p<<"\nChemistry:"<<c<<"\nMath:"<<m<<endl;
        }
};
class Bcom:public Student
{
    private:
        int bm,acc,eco;
    public:
        void get()
        {
            cout<<"Enter Roll No:";
            cin>>rollno;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Business Management Marks:";
            cin>>bm;
            cout<<"Enter Accounts Marks:";
            cin>>acc;
            cout<<"Enter Economics Marks:";
            cin>>eco;
        }
        void put()
        {
            cout<<"Roll Number:"<<rollno<<"\nName:"<<name<<endl;
            cout<<"Business Management:"<<bm<<"\nAccounts:"<<acc<<"\nEconomics:"<<eco<<endl;
        }
};
int main()
{
    Student *STD;
    cout<<"Bsc.."<<endl;
    Bsc S;
    STD=&S;
    STD->get();
    STD->put();

    cout<<"Bcom.."<<endl;
    Bcom C;
    STD=&C; 
    STD->get();
    STD->put();
}