#include<iostream>
using namespace std;
class REPORT
{
    private:
        int adno;
        char name[20];
        float marks[5];
        int i;
        float GETAVG(float m) 
        {   
          float n=m/5;
          return(n);

        }
       
    public:
        void READINFO()
        {
            cout<<"Enter admission no:";
            cin>>adno;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter marks of five subjects:";
            for(i=0; i<=4; i++)
            {
                cin>>marks[i];
            }
        }
        void DISPLAYINFO()
        { float totalMarks=0, m;
            cout<<"Admission No:"<<adno<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Marks of five subjects:"<<endl;
            for(i=0; i<=4; i++)
            {
                cout<<"Marks:"<<marks[i]<<endl;
                totalMarks=totalMarks+marks[i];
            } 
            cout<<"Total Marks:"<< totalMarks<<endl;
            m=totalMarks;
           float t=GETAVG(m);
            cout<<"Average:"<<t<<endl;
           
        }
};
int main()
{
    REPORT R;
    R.READINFO();
    R.DISPLAYINFO();
}