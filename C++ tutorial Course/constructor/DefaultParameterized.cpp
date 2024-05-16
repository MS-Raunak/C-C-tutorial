/*
 in C                     in c++
int a;                 Number a;
a=10                   a.getNumber();  
int a=10;               to do the use constructor 
int a=10,b=a;              "            
int a,b=20;                

Example of Default constructor/Pararmeterized constructor/Overloaded constructor  */
#include<iostream>
using namespace std;
class Number
{
    private:
       int n;
    public:
    Number()      // work for Number M
    {
        n=999;
    }
    Number(int n)    // work for Number N
    {
        this->n=n;
    }
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
    Number N(900); // call parameterized constructor
    N.putNumber();
    Number M;      //called default constructor
    M.putNumber();
    Number K=89;//possile only when constructor contain single parameter
    K.putNumber();
    N.getNumber();
    N.putNumber();
}