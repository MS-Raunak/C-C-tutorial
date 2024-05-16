#include<iostream>
using namespace std;
float volume(float x)  
{
    int v=x*x*x;
    return(v);
}

double volume(double r)  
{
   float v=4.0/3.0*3.14*r*r*r;
    return(v);
}              
     
double volume(float l,float w,float h)  
{
   float v=l*w*h;
    return(v);
}                           
int main()
{
  float v;
  v=volume(34.5f);
  cout<<v<<endl;
 double v;
  v=volume(5.4f);
  cout<<v<<endl;
  double v;
  v=volume(5.3f,4.5f,6.8f);
  cout<<v<<endl;
}