#include<stdio.h>
void main()
{
    int x[10],i,n;
    for(i=0; i<=9; i++)
    {
        printf("Enter value:");
        scanf("%d",&x[i]);
    }
    printf("Enter Number You want to Search?");
    scanf("%d",&n);
    for(i=0; i<=9; i++)
    {
        if(x[i]==n)
        {
            printf("%d,",i);
        }
    }
    
}