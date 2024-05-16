#include<stdio.h>
#include<conio.h>
int main()
{
    int ans;
    printf("First PM of India\n");
    printf("ATL\t\t\n2.SG\t\t\n3.Jwahar lal nehru\t\t\n4.NON\n");
    printf("Enter Your Choice");
    scanf("%d",&ans);
    if (ans==3)
    {
        printf("Answer is correct\n");
        printf("National animal of INdia\n");
        printf("1.Peacock\t\t\n2.Parrot\t\t\n3.Lion\t\t\n4.NON\n");
        printf("Enter your choice");
        scanf("%d",&ans);
        if(ans==3)
        {
            printf("Answer is correct\n");
            
             printf("National sweet of India\n");
            printf("1.L\t\t\n2.J\t\t\n3.R\t\t\n4.NON\n");
             printf("Enter your choice");
            scanf("%d",&ans);
            if(ans==3)
            {
                printf("Answer is Correct\n");
            }
            else
            {
                    printf("Wrong answer\n");
            }
    }
        else         
        {
            printf("Game over");
        }
            
        getch();  
    }
      

}