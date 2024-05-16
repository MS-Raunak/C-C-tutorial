#include<stdio.h>
void main()
{
    int x[5],y[5],i;
    printf("Enter 5 values of x:");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&x[i]);
        y[i]=x[i];
    }
    printf("Copied reverse\n");
    for(i=4; i>=0; i--)
    {
        printf("%d\n",y[i]);
    }
}