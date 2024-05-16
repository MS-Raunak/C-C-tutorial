#include<stdio.h>
void main()
{
    int i=1,n;
    int sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
             sum=sum+i;
        }
        i++;
        
    }
    printf("Sum of above even nos. is %d",sum);
    return;
}