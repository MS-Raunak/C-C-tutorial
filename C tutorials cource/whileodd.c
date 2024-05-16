#include<stdio.h>
void main()
{
    int i=1, n,sum=0;
    printf("Enter the last number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
        
    }
    printf("Sum=%d",sum);
    return;
}