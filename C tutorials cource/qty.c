#include<stdio.h>
void main()
{
    float rate,qty,amt,dis,na;
    printf("Enter Rate & Quantity");
    scanf("%f%f",&rate,&qty);
    amt=rate*qty;
    printf("Total Amount is %f\n",amt);
    if(amt>10000)
    {
        dis=amt*20/100;
    }
    else
    {
        dis=amt*5/100;
    }
    printf("Discount is %f\n",dis);
    na=amt-dis;
    printf("Net Amount is %f\n",na);

    
}