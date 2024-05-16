#include<iostream>
using namespace std;
class student
{
    private:
        int rollno;
        char name;
        int p,c,m;
    public:
        void Admin()
        {
            cout<<"Enter Roll No:";
            cin>>rollno;
            cout<<"Enter Name:";
            cin>>name;
        }
        void Faculty()
        {
            cout<<"Enter Physics Marks:";
            cin>>p;
            cout<<"Enter Chemistry Marks:";
            cin>>c;
            cout<<"Enter Math Marks:";
            cin>>m;
        }
        void Result()
        {
            cout<<"Physics:"<<p<<endl;
            cout<<"Chemistry:"<<c<<endl;
            cout<<"Math:"<<m<<endl;
            float t;
            float per;
            t=p+c+m;
            cout<<"Total:"<<t<<endl;
            per=t/3;
            cout<<"Percentage:"<<per<<endl;
             if(per>=60 && per<=100)
            {
                cout<<"First Division"<<endl;
            }
            else if(per>=45 && per<=59)
            {
                cout<<"Second  Division"<<endl;
            }
            else if(per>=30 && per<=44)
            {
                cout<<"Third Division"<<endl;
            }
            else
            {
                cout<<"Fail"<<endl;
            }
        }
};
int main()
    {
        student s1,s2;
        s1.Admin();
        s1.Faculty();
        s1.Result();
         s2.Admin();
        s2.Faculty();
        s2.Result();
  }