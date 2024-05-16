#include<stdio.h>
void main()
{
    int x=10,*p;
    float a=89.89,*k;
    p=&x;
    k=&a;
    printf("%u\n",x);
    printf("%u\n",&x);
    printf("%x\n",&x);
    printf("%p\n",&x);
    printf("%u\n",*(&x));
    printf("%u\n",p);
    printf("%u\n",&p);
    printf("%u\n",*(&p));
    printf("%u\n",**(&p));
     printf("%u\n",*p);
}