#include<stdio.h>
void main()
{
    int x[5],i,sum=0;
     printf("Enter 5 Value:");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0; i<=4; i++)
    {
        printf("%d,",x[i]);
        if(x[i]%2==0)
        {
        sum=sum+x[i];
        }
    }
    printf("\nSum of total even number=%d",sum);
}