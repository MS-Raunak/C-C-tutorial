#include<stdio.h>
#include<conio.h>
void main()
{
    int x=0;
    xyz:
    printf("Enter any number:");
    scanf("%d",&x);
    printf("%d\t",x);
    x=x+2;
    if(x<=10)
    {
        goto xyz;
    }
}