#include<stdio.h>
#include<conio.h>
void main() 
{
    int count;
    int i,j;
    printf("Enter the number of line");
    scanf("%d",&count);
    for(i=1; i<=count; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}