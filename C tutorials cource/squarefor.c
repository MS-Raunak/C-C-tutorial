#include<stdio.h>
int main()
{
    int i,square,num;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=0; i<=num; i++)
    {
        square=i*i;
        printf("Square of %d=%d\n",i,square);
    }
    return 0;
}
