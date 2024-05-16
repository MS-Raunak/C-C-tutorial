#include<iostream>
using namespace std;
class Array
{
    private:
        int x[10],size;
    public:
        void getArray(int);
        void putArray();
};
void Array::getArray(int n)
{
    size=n;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter x["<<i<<"]:";
        cin>>x[i];
    }
}
void Array::putArray()
{
    for(int i=0; i<size; i++)
    {
        cout<<x[i]<<",";
    }
    cout<<endl;
}
int main()
{
    Array A;
    cout<<"A:"<<endl;
    A.getArray(5);
    cout<<"A:"<<endl;
    A.putArray();

    Array B;
    cout<<"B:"<<endl;
    B.getArray(3);
    cout<<"B:"<<endl;
    B.putArray();
}