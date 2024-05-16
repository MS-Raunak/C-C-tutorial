#include<stdio.h>
int main()
{
    int i,j;
    for(j=1; j<=5; j++)
    {
        for(i=5; i>=1; i--)
        printf("%5d",i);
        printf("\n\n");
    }
    return 0;
}