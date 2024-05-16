#include<stdio.h>
void main()
{
	int i=1;
	xyz:
		printf("%d.",i);
		printf("Hello\n");
		i++;
		if(i<=5)
		{
			goto xyz;
		}
}
