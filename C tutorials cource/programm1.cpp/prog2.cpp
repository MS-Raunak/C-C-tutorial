#include<iostream>
using namespace std;
class student
{
    private:
        int rollno;
        char name[20];
        float marks;
    public:
        void setMarks()
        {
            cout<<"Enter Roll No:";
           cin>>rollno;
          cout<<"Enter Name:";
          cin>>name;
          cout<<"Enter Marks:";
          cin>>marks;
        }
        void showMarks()
        {
            cout<<"Roll No:"<<rollno<<endl<<"Name:"<<name<<endl<<"Marks:"<<marks<<endl;
        }
        void showResult()
        {
            cout<<"First division";
        }
};
int main()
{
    student N;
    N.setMarks();
    N.showMarks();
    N.showResult();
}