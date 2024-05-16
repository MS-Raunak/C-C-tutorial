#include<iostream>
using namespace std;
class student
{
    private:
        int rl;
        char nm[30];
        int p,c,m;
    public:
        void getAdmin()
        {
            cout<<"Enter Roll No:";
            cin>>rl;
            cout<<"Enter Name:";
            cin>>nm;
             cout<<"Enter Physics:";
            cin>>p;
             cout<<"Enter Chemistry:";
            cin>>c;
             cout<<"Enter Math:";
            cin>>m;
            
        }
        void getFaculty()
        {
            cout<<"Roll NO:"<<rl<<endl;
            cout<<"Name:"<<nm<<endl;
            cout<<"Physics:"<<p<<endl;
            cout<<"Chemistry:"<<c<<endl;
            cout<<"Math:"<<m<<endl;

        }
        void showResult()
        {
            float t=p+c+m;
            float per=t/3;
            cout<<"Total Marks is:"<<t<<endl;
            cout<<"Percentege Is:"<<per<<endl;
        }
};
int main()
{
    student s1,s2;
    s1.getAdmin();
    s1.getFaculty();
    s1.showResult();
    s2.getAdmin();
    s2.getFaculty();
    s2.showResult();
}