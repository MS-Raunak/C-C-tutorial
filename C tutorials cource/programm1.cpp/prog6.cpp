#include<iostream>
using namespace std;
class Employee
{
    private:
        int eid;
        char name[30];
        long salary;
    public:
        void getEmployee()
        {
            cout<<"Enter employee id:";
            cin>>eid;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter salary";
            cin>>salary;
        }
        void putEmployee()
        {
            cout<<eid<<"."<<name<<":"<<salary<<endl;
            
        }
        int search(int,int);
};
int main()
{
    Employee E[5];
    int i;
    for(i=0; i<=4; i++)
    {
        E[i].getEmployee();
    }
    long min,max;
    cout<<"Enter Min Salary";
    cin>>min;
    cout<<"Enter Max Salary";
    cin>>max;
}
