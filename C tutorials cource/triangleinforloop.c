#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,k,n=5;
   for(i=1;i<=n;i++)
   {
    for(k=1;k<=n-i;k++)
      {
        printf(" ");
    }
    n--;
    int c=(i-1)*2+1;
    for(j=1;j<=c;j++)
    {
        printf("%d ",j);
        
    }
    printf("\n");
}
return 0;
}