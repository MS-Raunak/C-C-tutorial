#include<stdio.h>
int main()
{
    int ans;
    printf("1.Captain of Indian cricket team?\n");
    printf("1.MSD\t\t 2.VK\t\t\n 3.RD\t\t 4.NON\n");
    printf("Enter a answer:");
    scanf("%d",&ans);
    if(ans==2)
    {
        printf("Get 2000rs\n");
    }
        else
        {
            printf("Game over\n");
            return 0;
        }
        printf("2.PM of India?\n");
        printf("1.Modi\t\t 2.Rahul\t\t\n 3.Manmohan S.\t\t 4.NON\n");
        printf("Enter a answer:");
    scanf("%d",&ans);
        if(ans==1)
        {
        printf("Get 50000rs\n");
        }
        else
        {
            printf("Game over\n");
        }
        printf("3.President of India?\n");
        printf("1.CR.\t\t 2.Qa\t\t\n 3.RN Kovind\t\t 4.NON\n");
        printf("Enter a answer:");
    scanf("%d",&ans);
        if(ans==3)
        {
            printf("Get 100000rs\n");
            printf("You Won\n");
        }
        else
        {
              printf("Game Over\n");
        }
      
        return 0;
        
}