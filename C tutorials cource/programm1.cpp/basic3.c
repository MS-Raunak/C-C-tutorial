#include<stdio.h>
void main()
{
    int n,i=1,t;
    
    printf("Enter any  number:");
    scanf("%d",&n);
    xyz:
   printf("%dX%d=%d\n",n,i,t=n*i);
    i=i+1;
    
    if(i<=10)
    {
        goto xyz;
        
    }
}    
