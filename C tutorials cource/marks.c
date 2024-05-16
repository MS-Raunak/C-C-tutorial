#include<stdio.h>
void main()
{
	int p,c,m;
	float t,per;
	printf("Enter Physics marks:");
	scanf("%d",&p);
	printf("Enter chemistry marks:");
	scanf("%d",&c);
	printf("Enter math marks:");
	scanf("%d",&m);
	t=p+c+m;
	printf("Total marks:%2f",t);
	per=t/3;
	printf("\nPercentage marks:%2f",per);
}
