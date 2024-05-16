#include<stdio.h>
void main()
{
    int i=1,c;
    c=(++i + i++);
    printf("%d\n%d",c,i);
}