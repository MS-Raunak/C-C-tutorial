#include<iostream>
float volume(float r)
{
	return (4*22*r*r*r)/(7*3);
}
 
int main()
{
	
	float v,r;
	printf("enter radius of the sphere: ");
	scanf("%f",&r);
        v=volume(r); 
	printf("VOS: %f\n",v);
	return 0;
}