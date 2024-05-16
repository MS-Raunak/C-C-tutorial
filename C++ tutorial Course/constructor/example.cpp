#include<iostream>
using namespace std;
class Number
{
    private:
       int n;
    public:
       void getNumber()
       {
           cout<<"Enter Number:";
           cin>>n;
       }
       void putNumber()
       {
           cout<<n<<endl;
       }
};
int main()
{
    Number N; //N is a object make by constructor and its not visible.
    //which is called default constructor.
    N.getNumber();
    N.putNumber();
}