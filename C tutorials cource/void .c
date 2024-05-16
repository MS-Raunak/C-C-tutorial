#include<stdio.h>

void main()
{
    int a,b,c,per,t;
    printf("Enter three subjects marks:");
    scanf("%d%d%d",&a,&b,&c);
    t=a+b+c;
    printf("Total is %d",t);
    per=t/3;
    printf("POercentage is %f",per);
    return 0;

}