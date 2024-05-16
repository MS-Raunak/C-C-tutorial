#include<stdio.h>
void main()
{
	float sal,da,hra,pf,netamt;
	
	printf("Enter Salary:");
	scanf("%f:",&sal);
	
	da=sal*65/100;
	printf("DA:%.2f\n",da);
	
	hra=sal*16/100;
	printf("HRA:%.2f\n",hra);
	
	pf=sal*65/100;
	printf("PF:%.2f\n",pf);
	
	netamt=sal+da+hra-pf;
	printf("Net Amount:%.2f",netamt);
	
	
	
}
