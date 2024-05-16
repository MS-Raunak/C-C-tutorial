#include<stdio.h>
int main()
{
    int i=2,j;
    while(i<=8)
       {
             j=2;
             while(j<=i)
             {
               printf("%d",i);
                j=j+2;
              }
           i=i+2;
          printf("\n");
        }
return 0;
}


