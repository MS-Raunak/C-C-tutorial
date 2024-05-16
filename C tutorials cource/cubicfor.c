#include<stdio.h>
int main()
{
    int i,cube,num;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        cube=i*i*i;
        printf("Cube of %d= %d\n",i,cube);
    }    
    return 0;
}
