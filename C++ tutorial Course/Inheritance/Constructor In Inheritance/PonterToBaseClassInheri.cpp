/*              POINTER TO BASE CLASS

                        Base
                        show()
                        /    \
                DeriveOne   DeriveTwo
                    show()      show()                                                                      */

#include<iostream>
using namespace std;
class Base
{
    public:
        void show()
        {
            cout<<"Base Version..."<<endl;
        }
};
class DeriveOne:public Base
{
    public:
        void show()
        {
            cout<<"Derive Version One..."<<endl;
        }
};
class DeriveTwo:public Base
{
    public:
        void show()
        {
            cout<<"Derive Version Two..."<<endl;
        }
};
int main()
{
    Base *B;
    DeriveOne D1;
    B=&D1;// reference of D1 in B
    B->show();//by default compiler will jump based on class type

    DeriveTwo D2;
    B=&D2;// reference of D1 in B
    B->show();//by default compiler will jump based on class type

    Base b;
    B=&b;
    B->show();
}