#include<stdio.h>
void main()
{
   int x=10,*p,a=10;
    p=&x;
    printf("%u\n",x);
    
    printf("%u\n",&x);
    printf("%u\n",*(&x));
    printf("%u\n",*(&x));
}