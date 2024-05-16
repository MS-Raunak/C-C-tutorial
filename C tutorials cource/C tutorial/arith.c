#include<stdio.h>

void main()
{ 
  int p,q;
  int sub,mul,add;
   float div;
  printf("Enter two numbers:");
  scanf("%d%d",&p,&q);
  sub = p - q;
  mul = p * q;
  add = p + q;
  div = (float)p/q;
  printf("\n");
  printf("subtraction %d-%d:%d\n",p,q,sub);
  printf("multiplication %d*%d:%d\n",p,q,mul);
  printf("addition %d+%d:%d\n",p,q,add);
  printf("division %d/%d:%f",p,q,div);
}
