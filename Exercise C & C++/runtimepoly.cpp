#include <iostream>  
using namespace std;  
class Base  
{  
    public:  
    virtual void show()  
    {  
        cout<<"javaTpoint";  
     }  
};  
class Derived:public Base  
{  
    private:  
    void show()  
    {  
        cout<<"javaTpoint tutorial";  
    }  
};  
int main()  
{  
    Base* b;  
    Derived d;  
    b=&d;  
    b->show();  
                return 0;  
}  
