#include<stdio.h>
int main()
{
    int i=8,j;
    while (i>=2)
    {
        j=1;
        while(j<=8)
        {
            printf("%d",i);
            j=j+1;
        }
        i=i-2;
        printf("\n");
    }
    return 0;
    
}