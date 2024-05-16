#include<stdio.h>
void main()
{
    int x[10],i,n,found=0;
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
            found=1;
        }
    }
    if(found==0)
    {
        printf("Number not found....");
    }
    
}