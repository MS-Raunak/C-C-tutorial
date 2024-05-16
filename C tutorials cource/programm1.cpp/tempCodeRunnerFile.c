#include<stdio.h>
void main()
{
    int x[3][4],i,j;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=3; j++)
        {
            printf("Enter x[%d][%d]:",i,j);
            scanf("%d",&x[i][j]);
        }
    } 
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=3; j++)
        {
            printf("%d ",x[i][j]);
            
        } printf("\n");
    }
}