#include<stdio.h>
#include<conio.h>
int main()
{
int ans;
printf("What is Your name\n");
printf("1.Raunak\t\t2.Mahendra\t\t\n3.Vinay\t\t4.Manish\n");
printf("Enter answer");
scanf("%d",&ans);
if(ans==1)
{
printf("Get 20000rs\n");
}
else
{
    printf("Over\n");
    return 0;
}
printf("What is Your Father's name\n");
printf("1.Ram\t\t2.Shyam\t\t\n3.Uttam\t\t4.NON\n");
printf("Enter answer");
scanf("%d",&ans);
if(ans==3)
{
    printf("Get 100000rs\n");
}
printf("What is Your Mother's name");
printf("1.Sunita\t\t2.Geeta\t\t\n3.Babita\t\t4.Manju\n");
printf("Enter answer");
scanf("%d",&ans);
if(ans==4)
{
    printf("Get 200000rs\n");
    printf("You Won\n");
}
    else
    
        {
            printf("Game Over");
        }
        getch();
    }


