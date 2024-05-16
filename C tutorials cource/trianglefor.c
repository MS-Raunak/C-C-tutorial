#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n=5;
     for(i=1; i<=5; i++)
     {
         for(j=1; j<=n; j++)
         {
             printf(" ");
         }
             n--;
             for(k=1; k<=i; k++)
             {
                 printf(" %d ",i);
             }
             printf("\n");
     }
    getch();
}
