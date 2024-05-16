#include<stdio.h>
#include<conio.h>
void fun(int,int,int);
void main()
{
    int a,b,c,d,e,f,g,h,i;
    fun(a,b,c);
    fun(d,e,f);
    fun(g,h,i);
    printf("\nAbove expression is very good");
    printf("\nWow");
    getch();
}
void fun(int x,int y,int z)
{
    printf("\nEnter any  three integers: ");

    
        scanf("%d%d%d",&x,&y,&z);
        printf("\nSum=%d",x+y+z);
        printf("\nMultiplication=%d",x*y*z);
}