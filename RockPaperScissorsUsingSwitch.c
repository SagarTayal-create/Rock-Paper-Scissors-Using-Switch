#include<stdio.h>
int main()
{   
    int a,b;
    printf("1=rock\n2=paper\n3=scissors\n");
    printf("Player 1 : ");
    scanf("%d",&a);
    printf("Player 2 : ");
    scanf("%d",&b);

    if (a<1 || a>3 || b<1 || b>3)
    {
        printf("Invalid Input");
    }
    else
    {
        switch (b)
        {
         case 1:
         {
             if(a==1)
            {
             printf("Draw");
             break;
            }
            else if(a==2)
            {
             printf("Player 1 Wins");
            }
            else
            {
             printf("Player 2 Wins");
            }
            break;
         }
         case 2:
         {
            if (a==1)
            {
             printf("Player 2 Wins");
            }
            else if(a==2)
            {
             printf("Draw");
            }
            else 
            {
             printf("Player 1 Wins");
            }
            break;
         }
         case 3:
         {
            if (a==1)
            {
             printf("Player 1 Wins");
            }
            else if(a==2)
            {
             printf("Player 2 Wins");
            }
            else
            {
             printf("Draw");
            }
            break;
         }

        }
    }
    return 0;
}