#include<stdio.h>
void main()
{
    int e,m,s,t;
    float per;
    printf("\v\t   Marksheet\n");
    printf("\nSubject\t\t\tMarks\n");
    printf("\nEnglish\t\t\t");
     scanf("%d",&e);
     printf("\nMath\t\t\t");
     scanf("%d",&m);
     printf("\nScience\t\t\t");
     scanf("%d",&s);
     t=e+m+s;
      per=(t*100)/300;
     printf("\n%%tage %f",per);
     printf("\t\tTotal %d\v",t);
    
}