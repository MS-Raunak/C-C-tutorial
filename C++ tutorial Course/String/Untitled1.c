#include<stdio.h>
void main()
{
	int i=1;
	xyz:
		printf("Hello\n");
		i=i+1;
		if(i<=5)
		{
			goto xyz;
		}
}
