#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n=5;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=n; j++)
        {
            printf(" ");
        }
        n++;
        int c=(i-1)*2+1;
        for(k=1; k<=5; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    getch();
}