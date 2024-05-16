#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    printf("Enter nth prime number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%i==0 && i%1==0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("sum=%d",sum);
}