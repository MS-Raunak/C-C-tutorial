/* POINTER TO BASE CLASS USING virtual/Dynamic Binding/Late Binding/RTP(Run Time Polymorphism)

                            Base
                            show()
                            /    \
                    DeriveOne   DeriveTwo
                     show()       show()  
                     
When function is made virtual c++ take necessary care to see that which function is to be invoke at runtime 
according to reference stored in base pointer.                                                                    */

#include<iostream>
using namespace std;
class Student
{
    protected:
        int rollno;
        string name;
    public:
       virtual void get()
        {        }

        virtual void put()
        {        }
};
class Bsc:public Student
{
    private:
        int p,c,m;
    public:
        void get()
        {
            cout<<"Enter Roll No:";//
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