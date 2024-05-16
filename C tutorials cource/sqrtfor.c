#include<stdio.h>
#include<math.h>
int main()
{
    float i,num,sr;
    printf("Enter any number");
    scanf("%f",&num);
    for(i=1; i<=num; i++)
    {
        sr=sqrt(i);
        printf("Squareroot of %f=%f\n",i,sr);
    }
    return 0;
}

