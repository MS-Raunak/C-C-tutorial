#include<iostream>
using namespace std;
class Matrix
{
    private:
         int x[10][10],row,col;
    public:
         void getMatrix(int,int);
         void putMatrix();
};
void Matrix::getMatrix(int r,int c)
{
    int i,j;
    row=r;
    col=c;
    for(i=0; i<row; i++)
    {
       for(j=0; j<col; j++)
       {
           cout<<"X["<<i<<"]["<<j<<"]:";
           cin>>x[i][j];
       }
    }

}
void Matrix::putMatrix()
{
    int i,j;
    for(i=0; i<row; i++)
    {
       for(j=0; j<col; j++)
       {
          cout<<x[i][j]<<" ";
       }
       cout<<endl;
    }

}
int main()
{
    Matrix M1;
    cout<<"Matrix:A"<<endl;
    M1.getMatrix(3,3);
    cout<<"Matrix:M1"<<endl;
    M1.putMatrix();
    Matrix M2;
    cout<<"Matrix:M2"<<endl;
    M2.getMatrix(3,3);
    cout<<"Matrix:M2"<<endl;
    M2.putMatrix();
    Matrix M3;
    

}