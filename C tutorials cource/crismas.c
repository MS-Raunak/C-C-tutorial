#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,space,j,k,l;
    for(i=0; i<7; i++)
    {
        for(space=0; space<7; space++)
        {
            printf(" ");
        }
        for(j=0; j<l; j++)
        {
            printf("*");
        }
        for(k=0; k<i-l; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0; i<4; i++)
    {
        for(space=0; space<10/2; space++)
        {
            printf(" ");
        }
        printf("* *");
        printf("\n");
        getch();
    }
}