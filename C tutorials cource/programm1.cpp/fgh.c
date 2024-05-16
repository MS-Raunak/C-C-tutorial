#include<stdio.h>
void main()
{
    float sal,hra,pf,da,ns;
    printf("Enter Salary");
    scanf("%f",&sal);
    if(sal>20000)
    {
        da=45*sal/100;
        hra=15*sal/100;
        pf=12*sal/100;
    }
    else
    {
        da=35*sal/100;
        hra=10*sal/100;
        pf=10*sal/100;
    }
    printf("DA:%f\n",da);
    printf("HRA:%f\n",hra);
    printf("PF:%f\n",pf);
    ns=sal+da+hra-pf;
    printf("Nt. Salary:%f",ns);
}

