#include<iostream>
#include<string.h>                            //Running Error
using namespace std;
class Employee
{
   private:
      int id;
      char name[30];
      char city[30];
      int  salary;
   public:
      Employee()
      {
                 
      }
      Employee(int id, char *name,int salary=0,char *city="")
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
          cout<<id<<","<<name<<","<<salary<<","<<city<<endl;
      }
};
int main()
{
  Employee E1;
  Employee E2(100,"James",67000,"Noida");
  Employee E3(200,"Jones",899,"rtt");
  Employee E4(E2);
  E1.putEmployee();
  E2.putEmployee();
  E3.putEmployee();
  E4.putEmployee();
}