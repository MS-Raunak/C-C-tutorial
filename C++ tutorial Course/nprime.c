#include<stdio.h>
int main()
{
	 long int number,rem,reverse=0,original;
	 printf("Enter the number:");
	 scanf("%ld",&number);
	 original=number;
	 
	 while(number!=0)
	 {
	 	rem=number%10;
	 	reverse=reverse*10+rem;
	 	number=number/10;
	 }
	 if(original==reverse){
	 	printf("\n%ld is a palindrome number\n",original);
	 }
	 else{
	 	printf("%ld is not a palindrome number",original);
	 }
	
	
}
