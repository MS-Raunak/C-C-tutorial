#include<iostream>
using namespace std;
class employee
{
    private:
        int id;
        char name[30];
        long sal;
    public:
        void getEmployee()
        {
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter Salary:"<<endl;
        cin>>sal;
        }
   
        void showEmployee()
        {
        cout<<"ID:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<sal<<endl;
        }
        void netSal()
        {
        float netSal,da,hra,pf;
        da=(34*sal)/100;
        hra=(15*sal)/100;
        pf=(12*sal)/100;
        netSal=sal+da+hra-pf;
        cout<<"Net Salary:"<<netSal<<endl;
        }
};
int main()
{
    employee e1,e2;
   e1.getEmployee();
    e1.showEmployee();
    e1.netSal();
    e2.getEmployee();
    e2.showEmployee();
    e2.netSal();
}


