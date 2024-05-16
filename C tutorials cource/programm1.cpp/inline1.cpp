#include<iostream>
using namespace std;
inline void display()
{
    int i=1;
    while(i<=10)
    {
    cout<<"I am inline function"<<endl;
    i++;
    }
}
void show()
{
    cout<<"I am normal function"<<endl;
}
int main()
{
    display();
    show();
}