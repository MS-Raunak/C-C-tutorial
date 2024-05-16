#include<stdio.h>
int main()
{
    int i,j,m,n=75;
    for(i=0; i<=4; i++)
    {
        for(j=0; j<=n; j++)
        {
            printf(" ");
        }
        for(m=0; m<=i-1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}