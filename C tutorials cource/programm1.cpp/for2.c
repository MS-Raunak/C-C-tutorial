#include<stdio.h>
void main()
{
    int x[5],i,sum=0;
    
    for(i=0; i<=4; i++)
    {
        printf("Enter five values:");
        scanf("%d",&x[i]);
        if(x[i]%2==0)
        {
            sum=sum+x[i];
        }
    }
    printf("Sum:%d",sum);
}