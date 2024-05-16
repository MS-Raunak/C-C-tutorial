//Function Overloading in Inheritance:A function which have same name but different parameteres.
/*
when base class and derive class contain same signature of function
*/
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
        void show() //same name
        {
            Base::show();
            cout<<"Derive Veersion.."<<endl;
        }
};
int main()
{
 Derive D;
 D.show();
}
/* In above example one cannot achieve polymorphism because show function invoke by two 
   different method first via D object and then Base class name.*/