#include<stdio.h>
void main()
{
	float p,c,m,total,per;
	printf("enter Physcis:");
	scanf("%f:",&p);
	printf("Enter Chemistry:");
	scanf("%f:",&c);
	printf("Enter Math:");
	scanf("%f:",&m);
	total=p+c+m;
	printf("Total Marks:%2.f",total);
	per=total/3;
	printf("Percentage:%2.f",per);
}
