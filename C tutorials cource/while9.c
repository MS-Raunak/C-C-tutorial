#include<stdio.h>
int main()						

{
    int i=10,j;
    while(i<=40)
    {
        j=i;
        while(j<=i+40)
        {
            printf("%d ",j);
            j=j+10;
            
        }
        
        i=i+10;
        printf("\n");
        
    }
    return 0;
}
