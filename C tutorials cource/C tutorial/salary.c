#include<stdio.h>
void main()
{
	float sal,asal,tax,netsal;
	printf("enter salary:");
	scanf("%f",&sal);
	asal=12*sal;
	printf("Annual Salary:%2.f\n",asal);
	tax=20*asal/100;
	printf("Tax:%2.f\n",tax);
	netsal=asal-tax;
	printf("Netsalary:%2.f",netsal);
}
