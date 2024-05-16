#include<stdio.h>
void main()
{
    int c={2000,500,200,100,50,20,10,5,2,1},i;
    int rs,d;
    printf("Enter rs:");
     scanf("%d",&rs);
    for(i=0; i<=9; i++)
    { 
        d=rs/c;
        printf("%d-%d\n",c=[i],d);
        rs=rs%c;
    }
}