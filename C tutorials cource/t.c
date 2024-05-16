#include<stdio.h>
void main()
{
    int p,c,m;
    float per,t;
    printf("Physics,Chemistry,Math");
    scanf("%d%d%d",&p,&c,&m);
    t=p+c+m;
    per=t/3;
    printf("Total:%f\t\tPercentage:%f",t,per);
}