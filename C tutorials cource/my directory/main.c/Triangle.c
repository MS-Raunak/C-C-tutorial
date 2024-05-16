#include<stdio.h>
#include<conio.h>
void main()
{
    int r,s,t,v=15;
    for(r=1; r<=5; r++)
    {
        for(s=1; s<r; s++)
        {
            printf(" ");
        }
        for(t=1; t<=6-r; t++)
        {
            printf("%d ",v);
            v--;
        }
        printf("\n");
    }
    getch();
}