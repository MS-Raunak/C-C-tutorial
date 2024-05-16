#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf("%d",i);
            j=j+1; 
        }
        i=i+1;
           printf("\n");
    }
 
    return 0;
}