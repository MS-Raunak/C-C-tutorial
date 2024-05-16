#include<stdio.h>
void main()
{
    int i=1,s,c;
    xyz:
    printf("%d\n",i);
    s=i*i;
    printf("%d\n",s);
    c=i*i*i;
    printf("%d\n",c);
    i=i+1;
    if(i<=5)
    {
        goto xyz;
    }
}