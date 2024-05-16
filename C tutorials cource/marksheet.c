#include<stdio.h>
int main()
{
    int p,c,m,b,h,t;
    float per;
    printf("Enter five subjects marks");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&h);
    t=p+c+m+b+h;
    printf("Total marks is %d\n",t);
    per=t/5;
    printf("Percentage is %f\n",per);
    if(per>=60 && per<=100)
    {
        printf("First division\n");
    }
    else if(per>=50 && per<60)
    {
        printf("Second division\n");
    }
    else if(per>=30 && per<50)
    {
        printf("Third division\n");
    }
    else
    {
        {
            printf("Fail");
        }
    }
    
return 0;
}