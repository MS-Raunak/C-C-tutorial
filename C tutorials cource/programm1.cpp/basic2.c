#include<stdio.h>
void main()
{
    int i=1,s=0;
xyz:
s=s+i; 
i=i+1;
if(i<=5)
{
   goto xyz;
}
printf("%d",s);
}
