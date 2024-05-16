#include<stdio.h>

int main() 
{
	int a,b,ch;

	printf("Enter two integers:");
	scanf("%d%d",&a,&b) ;
	printf("\n1.Addition");
	printf("\n2.Substraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\nEnter Your choice? ");
	scanf("\n%d",&ch);
	switch(ch) 
	{
		case 1:
		printf("\nResult is %d",a+b);
		break;
		case 2:
		printf("\nResult is %d",a-b); 
		break;
		case 3:
		printf("\nResult is %d",a*b); 
		break;
		case 4: 
		printf("\nResult is %f",(float)a/b); 
		break;
		default: 
		printf("\nWrong choice dear");
	}
}


