//program to find sum of an array elements
//#include<stdio.h>
//int main()
//{
//	int arr[5],i,sum=0;
//	printf("Enter array elements:");
//	for(i=0; i<5; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("Sum of array elements:");
//	for(i=0; i<5; i++)
//	{
//		sum=sum+arr[i];
//	}
//	printf("%d",sum);
//}


////program to reverse of an array elements
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a[5];
//	int i;
//	printf("Enter elements of an array:");
//	for(i=0; i<5; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=4; i>=0; i--)
//	{
//		printf("%d, ",a[i]);
//	}
//}


//program to reverse string of an array 

#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i;
	printf("Enter String:");
	scanf("%s",&str);
	for(i=strlen(str)-1; i>=0; i--)  // R|a|u|n|a|k|\0 length=6 so we reduce the length from 1
	{
		printf("%c",str[i]);
	}
}
















