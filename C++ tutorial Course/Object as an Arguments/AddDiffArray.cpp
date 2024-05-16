#include<iostream>
using namespace std;
class Array
{ private:
    int x[10],size;
  public: 
    void getArray(int);
    void putArray();
    Array add(Array);
};
void Array::getArray(int n)
{ size=n;
   for(int i=0;i<size;i++)
   {  cout<<"Enter x["<<i<<"]:";
      cin>>x[i];
     }
 }
 
 void Array::putArray()
 {
   for(int i=0;i<size;i++)
    {
    cout<<x[i]<<",";
    }
   cout<<endl;
 }
  
Array Array::add(Array T)
{  Array R;
   int i,j;
   
   if(T.size<size)
   {
   R.size=size;
   j=T.size;}
   else if(size<T.size)
   {
   R.size=T.size;
   j=size;}
   else
   {
   R.size=size;
   j=size;}
   
   
   for(i=0;i<j;i++)
   {
   	R.x[i]=x[i]+T.x[i];
   }
   
   if(T.size>size)
   {
    for(;i<T.size;i++)
    {R.x[i]=0;}
    }
   else if(T.size<size)
   {
   	 for(;i<size;i++)
   	 {R.x[i]=0;
		}
	} 
return R;	
	
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
  
  Array C;
  C=A.add(B);
  
  cout<<"C"<<endl;
  C.putArray();
  

}

