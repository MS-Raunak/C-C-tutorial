#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter any three number");
  scanf("%d%d%d",&a,&b,&c);
  printf("%d\n%d\n%d\n",a,b,c);
  c=a;
  b=b;
  a=c;
  printf("%d\n%d\n%d",c,b,a);
}