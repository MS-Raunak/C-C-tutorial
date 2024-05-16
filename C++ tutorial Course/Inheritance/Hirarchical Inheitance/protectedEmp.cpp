//Homework (in protected mode)
#include<iostream>
using namespace std;
class Employee
{
  protected:
        int id;
        string name;
        long salary;
    public:
        void getEmployee()
            {
                cout<<"Enter Employee Id:";
                cin>>id;
                cout<<"Enter Employee Name:";
                cin>>name;
                cout<<"Enter Salary:";// 
                cin>>salary;
            }
        void putEmployee()
        {
            cout<<id<<" is employee id\n"<<name<<" is employee name\n"<<salary<<" is employee salary"<<endl;
        }
};
class Perks:public Employee
{
    protected:
        long da,hra,pf;
    public:
        void getPerks()
        {
            getEmployee();
           da=salary*35/100;
           hra=salary*18/100;
           pf=salary*12/100;
        }
        void putPerks()
        {
            putEmployee();
            cout<<da<<" is da\n"<<hra<<" is hra\n"<<pf<<" is pf"<<endl;
        }
};
class NetSalary:public Perks
{
    private:
        long  totalsalary;
    public:
        void getNetSalary()
        {   getPerks();
            totalsalary=da+hra-pf;
        }
        void putNetSalary()
        {
            putPerks();
            cout<<"Net Salary:"<<totalsalary<<endl;
        } 
};
int main()
{
    NetSalary N;
    N.getNetSalary();
    N.putNetSalary();
}