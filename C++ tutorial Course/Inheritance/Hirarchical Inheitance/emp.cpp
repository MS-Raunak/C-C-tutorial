//Homework (in private mode)
#include<iostream>
using namespace std;
class Employee
{
    private:
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
                cout<<"Enter Salary:";
                cin>>salary;
            }
        void putEmployee()
        {
            cout<<id<<" is employee id\n"<<name<<" is employee name\n"<<salary<<" is employee salary"<<endl;
        }
        int returnSalary()
        {
            return(salary);
        }
        
};
class Perks:public Employee
{
    private:
        long da,hra,pf;
    public:
        void getPerks()
        {
            getEmployee();
            int s=returnSalary();
            da=s*35/100;
            hra=s*18/100;
            pf=s*12/100;
            
        }

        void putPerks()
        {
            putEmployee();
            cout<<da<<" is da\n"<<hra<<" is hra\n"<<pf<<" is pf"<<endl;
        }
        int Calculation()
        {
            return(da+hra-pf);
        }
};
class NetSalary:public Perks
{
    private:
        long  totalsalary;
    public:
        void getNetSalary()
        {   getPerks();
            totalsalary=Calculation();
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

/*In other method but not best

#include<iostream>
using namespace std;
class Employee
{
	private:
		int id;
		string name;
		int salary;
	public:
		void getemployee()
		{
			cout<<"id:";
			cin>>id;
			cout<<"name:";
			cin>>name;
			cout<<"salary";
			cin>>salary;
		}
		void putemployee()
		{
			cout<<"Employee id:"<<" "<<id<<endl;
			cout<<"Employee name:"<<" "<<name<<endl;
			cout<<"Employee salary:"<<" "<<salary<<endl;
		}
		
		int returnsalary()
		{
			return(salary);
		}
};

class Perks: public Employee
{
	private:
		int da,hra,pf;
	public:
		void getdetails()
		{
		getemployee();
		}
		
		void putdetails()
		{
		putemployee();
		}
		int returnperks()
		{ int s=returnsalary();
			da=0.35*s;
			hra=.18*s;
			pf=.12*s;
			
			return(da+hra-pf);
		}
};
 
 class Netsalary:public Employee, public Perks
 {
 private:
 	 int netsalary;
	public:
			void getsalary()
			{
				getdetails();
			int p=returnperks();
			netsalary=p;
			}
	 	void showemployee()
		{
			putdetails();
			cout<<"Total salary of the employee is"<<" "<<netsalary<<endl;
		}
};
int main()
{
Netsalary n;
n.getsalary();
n.showemployee();
}   
*/