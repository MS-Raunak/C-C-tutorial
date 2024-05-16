#include<stdio.h>
void main()
{
	float amt,rate,time,si;
	printf("enter amount:");
	scanf("%f:",&amt);
	printf("Enter Rate:");
	scanf("%f:",&rate);
	printf("Enter Time:");
	scanf("%f:",&time);
	si=(amt*rate*time)/100;
	printf("Simple Interest:%2.f",si);
}
