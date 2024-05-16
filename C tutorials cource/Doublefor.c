#include<stdio.h>
int main()
{
    int i,num;
    int j;
    printf("Enter any number");
    scanf("%d",&num);
    for(i=0;   i<=num;   i++)
{
        for(j=0; j<=num; j++)
        {
     printf("%d\t\t%d\n",i,j);
        }
    
}

    return 0;
}
