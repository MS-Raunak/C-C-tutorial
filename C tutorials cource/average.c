#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f,g,h,i,j,n=10;
    int sum;
    float avr;
    printf("Enter ten numbers");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    sum=a+b+c+d+e+f+g+h+i+j;
    avr=(sum/n);
    printf("\nAverage of %d numbers is %f",n,avr);
    getch();
}