#include<stdio.h>
void main()
{
    int x[10],i,n,count=0,found=0;
     printf("Enter any 10 values:");

    for(i=0; i<=9; i++)
    {
        scanf("%d",&x[i]);
    }
    
    printf("Enter Number You want to Search?");
    scanf("%d",&n); 
    
    for(i=0; i<=9; i++)
    {          
        if(x[i]==n) 
        { 
            count++;
            printf("%d,",i);
            found=1;
        }
    }  
     printf("........");
    printf("\nThis number is repeating %d times",count);  
    if(found==0)
    {
    printf("\nNumber not found...");
    }     
}