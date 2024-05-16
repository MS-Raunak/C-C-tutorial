#include<stdio.h>
void main()
{
	int i;
	printf("Enter any number:");
	scanf("%d",&i);
	if(i<5)
	{
		printf("%d is smallest number than 5",i);
	}
	else
	{
		printf("%d is greater number than 5",i);
	}
}
