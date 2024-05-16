//Function Overloading in Inheritance:A function which have same name but different parameteres.

#include<iostream>
using namespace std;
class Base
{
    public:
        void show()  //same name
        {
            cout<<"Base Version.."<<endl;
        }
};
class Derive:Base
{
    public:
        void show(int x) //same name
        {
            Base::show();
            cout<<"Derive Veersion.."<<x<<endl;
        }
};
int main()
{
 Derive D;
 D.show(34);
}
/* In above example one cannot achieve polymorphism because show function invoke by two 
   different method first via D object and then Base class name.*/