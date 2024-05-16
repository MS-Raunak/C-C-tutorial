#include<stdio.h>
void main()
{
	float rate,qty,tamt,dis,netamt;
	
	printf("Enter Rate:");
	scanf("%f:",&rate);
	
	printf("Enter Quantity:");
	scanf("%f:",&qty);
	
	tamt=rate*qty;
	printf("Total Amount:%.2f\n",tamt);
	
	dis=(tamt*5)/100;
	printf("Discount:%.2f\n",dis);
	
	netamt=tamt-dis;
	printf("Net Amount:%.2f",netamt);
	
}
