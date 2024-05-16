#include<stdio.h>
#include<math.h>
int main()
{
    float i,num,cr;
    printf("Enter any number:");
    scanf("%f",&num);
    for(i=1; i<=num; i++)
    {
        cr=cbrt(i);
        printf("Cuberoot of %f= %f\n",i,cr);
    }
    printf("Definitely Right");
    return 0;
}
