#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{

//	string str; 
//    cout<<"enter string:";
//    cin>>str;
//    
//    reverse(str.begin(), str.end()); 
//	cout<<"\n"<<str; 
//    return 0;

//	char str[20];
//	cout<<"Enter String:";
//	cin>>str;
//	strrev(str);
//	cout<<"Reversed:"<<str<<endl;
string str="Raunak"; 
    int i;
    cout<<"Printing string in reverse\n";
    for(i = str.length() - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }
}
