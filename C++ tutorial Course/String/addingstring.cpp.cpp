//add two string
#include<iostream>  
#include<string.h>  
using namespace std;  
  
class String  
{  
private:
    char str[30];   
public:  
    void getString()  
    {  
        cout<<"Enter your string: ";  
        cin.getline(str,20);  
    }  
    void putString() 
    {  
        cout<<"String: "<<str;  
    }  
    String operator+(String s)   
    {  
        String R;  
        strcat(str,s.str);  
        strcpy(R.str,str);  
        return R;  
    }  
};  
int main()  
{  
    String S1,S2,S3;   
    S1.getString();  
    S2.getString();  
    S3=S1+S2;  
    S3.putString();   
   
}
