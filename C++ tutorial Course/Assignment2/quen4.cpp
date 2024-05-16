/*Q4. Create a Class Students having private members 
 Rollno, name, aggregate percentage,high secondry 
and highschool percentage,backlogany(yes & no) and 
age
Now create following functions to find out those 
students who are eligible for campus placement 
according to the criteria given by the companies
1)GetStudents 2)PutStudents 3)Search*/

#include <iostream>
using namespace std;
class Students
{
private:
    int rollno, age;
    char name[30];
    float a, per, hsper, HSper;

public:
    void getStudents()
    {
        cout << "Enter Roll No";
        cin >> rollno;
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter Age:";
        cin >> age;
        cout << "Enter High School Percentage:";
        cin >> hsper;
        cout << "Enter Higher Secondry School PErcentage:";
        cin >> HSper;
    }

    void putStudents()
    {
        cout << "Roll NO:" << rollno << endl;
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "High School Marks(In %):" << hsper << endl;
        cout << "Secondry School Marks(In %):" << HSper << endl;
    }
    int search(int);
};
int Students::search(int RollNO)
{
    if (rollno == RollNO)
        return (0);
    else
        return (1);
}
int main()
{
    Students S[3];
    int i, rollno, found = 0, ch;
    for (i = 0; i <= 2; i++)
    {
        S[i].getStudents();
    }
    do
    {
        cout << "Main Menu\n1.]Show All Students\n2.Search by Roll No\n3.Exit" << endl;
        cout << "Enter Your Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (i = 0; i <= 2; i++)
            {
                S[i].putStudents();
            }
            break;
        case 2:
            cout << "Enter Roll No You Find:";
            cin >> rollno;
            for (i = 0; i <= 2; i++)
            {
                found = S[i].search(rollno);
                if (found)
                {
                    S[i].putStudents();
                    break;
                }
            }
            if (!found)
            {
                cout << "Record Not Found......." << endl;
            }
            break;
        case 3:
            break;
        default:
            cout << "Invalid Key..." << endl;
        }
    } while (ch != 3);
}