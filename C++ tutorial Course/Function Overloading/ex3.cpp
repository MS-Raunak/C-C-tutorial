#include<iostream>
using namespace std;
class Employee
{
    private:
        int id;
        char name[30];
        long salary;
    public:
        void getEmployee()
        {
            cout<<"Enter Employee Id:";
            cin>>id;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Salary:";
            cin>>salary;
        }
        void putEmployee()
        {
            cout<<id<<","<<name<<","<<salary<<endl;
        }
        void netSalary (int comm)
        {
            salary=salary+comm;
        }
        void netSalary (int bonus,int comm)
        {
            salary=salary+comm+bonus;
        }
};
int main()
{
    Employee E1,E2;
    cout<<"Employee One:"<<endl;
    E1.getEmployee();
    E1.putEmployee();
    E1.netSalary(9000);
    E1.putEmployee();
    cout<<"Employee One:"<<endl;
    E2.getEmployee();
    E2.putEmployee();
    E2.netSalary(500,1000);
    E2.putEmployee();
}