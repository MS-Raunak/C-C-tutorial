#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any two number:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a-b;
        
    }
    else
    {
        c=b-a;
        
    }
    
   printf("Result=%d",c); 
}