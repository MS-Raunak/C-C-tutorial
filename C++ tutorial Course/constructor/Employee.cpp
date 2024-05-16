#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
        int id;
        char name[30];
        long salary;
        char city[30];
    public:
        Employee()
        {
            id=1;
            char name[30]="Rohit";
            salary=200;
            char city[30]="Gangtok";

        }
         Employee(int id, char *name,long salary=0,char *city="")
        //Employee(int id,char *name,long salary=0, char *city="")
        {
            this->id=id;
            strcpy(this->name,name);  
            this->salary=salary;
            strcpy(this->city,city);
        }

        Employee(Employee &T)
        {
            id=T.id+100;
            strcpy(name,T.name);
            salary=T.salary;
            strcpy(city,T.city);
        }

        void putEmployee()
        {
            cout<<"id:"<<id<<"\nName:"<<name<<"\nSalary:"<<salary<<"\nCity:"<<city<<endl;
        }

};
int main()
{
    cout<<"Employee E1..."<<endl;
    Employee E1;
    
    
    Employee E2(02,"Rahul",40000,"Banglore");
    
    
    Employee E3(200,"Peter",899,"sdf");

    
    Employee E4(E2);

    E1.putEmployee();
    cout<<"Employee E2..."<<endl;
    E2.putEmployee();
    cout<<"Employee E3..."<<endl;
    E3.putEmployee();
    cout<<"Employee E4..."<<endl;
    E4.putEmployee();
}
