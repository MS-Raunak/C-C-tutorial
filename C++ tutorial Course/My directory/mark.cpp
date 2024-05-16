#include<iostream>
using namespace std;
class Student
{       private:
            char name[30];                                                                                                                                                                                                                                                                                                                                                                                              
             int p,c,m;
             int rollno;
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
        Student S1,S2;
        S1.Admin();
        S1.Faculty();
        S1.Result();
        S2.Admin();
        S2.Faculty();
        S2.Result();
}