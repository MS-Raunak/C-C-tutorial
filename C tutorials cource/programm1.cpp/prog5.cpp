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
            cout<<"Enter Employee ID:";
            cin>>eid;
            cout<<"Enter Employee Name:";
            cin>>name;
            cout<<"Enter Salary:";
        }
        
};
