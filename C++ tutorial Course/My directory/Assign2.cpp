#include<iostream>
using namespace std;
class student
{
    private:
        int admno;
        char sname[30];
        float eng,math,science;
        float ctotal()
        {
            float c=eng+math+science;
            return(c);
        }
    public:
    void takedata()
    {
        cout<<"Enter Admission Number:";
        cin>>admno;
        cout<<"Enter Student Name:";
        cin>>sname;
        cout<<"Enter English:";
        cin>>eng;
        cout<<"Enter Math:";
        cin>>math;
        cout<<"Enter Science:";
        cin>>science;
    }
    void showdata()
    {
        cout<<"Admission No:"<<admno<<endl;
        cout<<"Student Name:"<<sname<<endl;
        cout<<"English:"<<eng<<endl;
        cout<<"Math:"<<math<<endl;
        cout<<"Science:"<<science<<endl;
        float t=ctotal();
        cout<<"Total:"<<t<<endl;
    }
};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}