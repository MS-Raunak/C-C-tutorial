#include<iostream>
using namespace std;
class Shapes
{
    public:
        virtual void get()=0;
        virtual void put()=0;
};
class Rectangle: public Shapes
{
    private:
        double l,b,a;
    public:
        void get()
        {
            cout<<"Enter Length:";
            cin>>l;
            cout<<"Enter Breadth:";
            cin>>b;
            a=l*b;
        }
        void put()
        {
            
            cout<<"Length:"<<l<<"\nBreadth:"<<b<<"\nArea:"<<a<<endl;
        }

};
class Circle: public Shapes
{
    private:
             double r,a;
             
    public:
        void get()
        {
            cout<<"Enter Radius:";
            cin>>r;
          a=3.14*r*r;
        }
        void put()
        {
            cout<<"Radius:"<<r<<"\nArea:"<<a<<endl;
        }

};
int main()
{
    Shapes *S;
    cout<<"Rectangle..."<<endl;
    Rectangle R;
    S=&R;
    S->get();
    S->put();

    cout<<"Circle..."<<endl;
    Circle C;
    S=&C;
    S->get();
    S->put();
}