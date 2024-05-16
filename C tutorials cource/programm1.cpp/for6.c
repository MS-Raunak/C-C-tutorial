#include<stdio.h>
void main()
{
    int x[10],i,f=0,s=0,t=0,fa=0;
    printf("Enter 10 academic percentage:");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>=60 && i<=100)
        {
            f++;
        }
        else if(x[i]>=48 && i<=59)
        {
            s++;
        }
         else if(x[i]>=35 && i<=47)
        {
            t++;
        }
         else if(x[i]>=0 && i<=37)
        {
            fa++;
        }
    }
    printf("Total No of first division:%d",f);
    printf("\nTotal No of second division:%d",s);
    printf("\nTotal No of third division:%d",t);
    printf("\nTotal No of fail division:%d",fa);
}