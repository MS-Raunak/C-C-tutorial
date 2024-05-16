#include<iostream>
using namespace std;

class Practical;
class Academic
{
	private:
		
		int rollno;
	    char name[30];
       	int phy,chem,math;
       	int AcadTotal;
       	float AcadPercent;
       	
    public:
    	void getStudentDetails()
    	{
    		cout<<"Enter Student Roll Number:";
    		cin>>rollno;
    		cout<<"Enter Student Name:";
    		cin>>name;
    		cout<<"\nEnter Student Physics Marks:";
    		cin>>phy;
    		cout<<"Enter Student Chemistry Marks:";
    		cin>>chem;
    		cout<<"Enter Student Mathematics Marks:";
    		cin>>math;
		}
		void putStudentDetails()
		{
			cout<<"\nStudent Roll Number:"<<rollno<<endl;
			cout<<"Student Name:"<<name<<"\n"<<endl;
			cout<<"Student Physics Marks:"<<phy<<endl;
			cout<<"Student Chemistry Marks:"<<chem<<endl;
			cout<<"Student Mathematics Marks:"<<math<<"\n"<<endl;
			
			AcadTotal=phy+chem+math;
			
			AcadPercent=AcadTotal/3;
		
		}
		
		friend void Result(Practical&,Academic&);
};

class Practical
{
	private:
		
		int rollno;
	    char name[30];
       	int ppm,cpm;
       	int PracTotal;
       	float PracPercent;
       	
    public:
    	void getStudentDetails()
    	{
    		cout<<"Enter Student Roll Number:";
    		cin>>rollno;
    		cout<<"Enter Student Name:";
    		cin>>name;
    		cout<<"\nEnter Student Physics Practical Marks:";
    		cin>>ppm;
    		cout<<"Enter Student Chemistry Practical Marks:";
    		cin>>cpm;
		}
		void putStudentDetails()
		{
			cout<<"\nStudent Roll Number:"<<rollno<<endl;
			cout<<"Student Name:"<<name<<endl;
			cout<<"Student Physics Practical Marks:"<<ppm<<endl;
			cout<<"Student Chemistry Practical Marks:"<<cpm<<"\n"<<endl;
			
			PracTotal=ppm+cpm;
			
			PracPercent=PracTotal/3;
	
		}
		
		friend void Result(Practical&,Academic&);
};

void Result(Practical &Prac,Academic &Acad)
{
	Acad.AcadTotal=Acad.AcadTotal+Prac.PracTotal;
	cout<<"\nTotal Marks Of Student:"<<Acad.AcadTotal<<endl;
	Acad.AcadPercent=(Acad.AcadPercent+Prac.PracPercent)/3;
	cout<<"\nTotal Percentage Of Student:"<<Acad.AcadPercent<<"\n"<<endl;
    
    if(Acad.AcadPercent>=80 && Acad.AcadPercent<=100)
    {
    	cout<<"First Division A+:"<<endl;
	}
	else if(Acad.AcadPercent>=50 && Acad.AcadPercent<=79)
	{
		cout<<"Sceond Division B+:"<<endl;
	}
	else if(Acad.AcadPercent>=30 && Acad.AcadPercent<=49)
	{
		cout<<"Third Division C+:"<<endl;
	}
	else
	{
		cout<<"Fail:"<<endl;
	}
}

int main()
{
	Academic Acad;
	Practical Prac;
	
	Acad.getStudentDetails();
	Acad.putStudentDetails();
	
	Prac.getStudentDetails();
	Prac.putStudentDetails();
	
	Result(Prac,Acad);
	Acad.putStudentDetails();
	
}