//dynamic transposed matrix
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int **x,row,col;
    public:
        void getMatrix(int r,int c)
        {
            int i,j;
            row=r;
            col=c;
            x=new int *[r];
            for(i=0; i<row; i++)
            {   
                x[i]=new int[col];
                for(j=0; j<col; j++)
                {
                    cout<<"x["<<i<<"]["<<j<<"]:";
                    cin>>x[i][j];
                }
            }
        }
        void putMatrix()
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
        void operator<<(Matrix);
};
void Matrix::operator<<(Matrix R)
{
    col=R.row;
    row=R.col;
    x=new int*[row];
    cout<<"Transposed Matrix is:"<<endl;
    int i,j;
    for(i=0; i<row; i++)
    {  x[i]=new int[col];
        for(j=0; j<col; j++)
        {
            x[i][j]=R.x[j][i];
        }
    }
}
int main()
{
    Matrix M1,M2;
    M1.getMatrix(2,2);
    M1.putMatrix();
    M2<<M1;
    M2.putMatrix();
}