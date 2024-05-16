#include<stdio.h>
int main()
{
    int i,j;
    for(j=1; j<=5; j++)
    {
        for(i=1; i<=j; i++)
        printf("%5d",i);
        printf("\n");
    }
    return 0;
}