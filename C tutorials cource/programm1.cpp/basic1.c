#include<stdio.h>
void main()
{
    int i=1,s,c;
    xyz:
    printf("%d\t",i);
    s=i*i;
    printf("%d\t",s);
    c=i*i*i;
    printf("%d\t",c);
    i=i+1;
    if(i<=5)
    {
        goto xyz;
    }
}