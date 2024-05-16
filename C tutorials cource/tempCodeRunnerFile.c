#include<stdio.h>
int main()
{
    int i=5,j;
    while(i>=1)
       {
             j=5;
             while(j>=i)
             {
               printf("%d",j);
                j=j-1;
              }
           i=i-1;
          printf("\n");
        }
return 0;
}


