#include<iostream>
using namespace std;
class Matrix
{  private:
	int A[10][10],m,n,i,j;
   public:
     void getMatrix()
	{ cout<<"Enter Rows and Columns of Matrix:";
	   cin>>m>>n;
       cout<<"Enter elements of Matrix:";
       for(i=0; i<m; i++)
       {
           for(j=0; j<n; j++)
           {
               cin>>A[i][j];
           }
       }
       cout<<"Entered Matrix:"<<endl;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
	}	 
	void putMatrix()
	{
        cout<<"Transpose of Matrix:"<<endl;
        cout<<A[j][i];
	}	  
	void operator<<(Matrix);
	
};
void Matrix::operator<<(Matrix T)
{
    //I'am confusing in this body
 int i,j=0;   
 for(i=0;T.A[i];i++);

  for(i=i-1;i>=0;i--)
  {
   A[j++]=T.A[i];	
  }
 A[j]=0;
 }	
int main()
{ Matrix M1;
  M1.getMatrix();
  
  Matrix M2;
   M2<<M1;
  M2.putMatrix();	
}
