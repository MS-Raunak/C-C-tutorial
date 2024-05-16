#include<iostream>
using namespace std;
class Rectangle
{
    int length,breadth;
    public:
    void setDimensional(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int getArea()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle rt;
    rt.setDimensional(7,4);
    cout<<"Area of Rectangle ="<<rt.getArea()<<endl;
    return 0;
}