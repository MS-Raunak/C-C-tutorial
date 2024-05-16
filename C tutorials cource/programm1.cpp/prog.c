#include<stdio.h>
void main()
{
    int t,gst,et,na;
    printf("Enter talktime:");
    scanf("%d",&t);
    if(t<=200)
    {
        printf("Total Charge:500\n");
    }
    else
    {
        et=t-200;
        printf("Extra talktime:%d\n",et);
        gst=18*et/100;
        printf("GST:%d\n",gst);
        na=500+gst;
        printf("Net Amount:%d\n",na);
    }
    
}