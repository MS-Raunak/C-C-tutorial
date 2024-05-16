#include<stdio.h>
void main()
{
    int i=10;
    xyz:
    printf("%d\n",i);
    i=i-3;
    printf("%d\n",i);
    i=i+5;
    if(i<=16)
    {
        goto xyz;
    }
}