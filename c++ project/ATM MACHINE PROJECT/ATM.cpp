#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>																//use for c++ program for cout pre define function
int main()
{
    float x = 200, y,pin;
    char ch;
    int count = 0;
    printf("**********WELCOME TO SBI BANK JALGAON**********\n\n");
    printf("PLEASE ENTER YOUR ATM CARD\n\n");
label3:
    printf("PLEASE ENTER YOUR VALID PIN:\n");
    scanf("%f", &pin);
    if (pin == 2400)															//already define pin for sequrity
    {
        while (ch != 'E')														 //while loop for condition
        {

            printf("\nC-FOR CREDIT\n\nD-FOR DEBIT\n\nB-BALENCE\n\nE-FOR EXIT\n\n");
            scanf("\n %c", &ch);
            switch (ch)															//looping statement are use
            {
            case 'c': //
                printf("ENTER CREDITE AMOUNT\n");
                scanf("%f", &y);												//adding 
                x = x + y;
                printf("SUCESSFULLY CREDIT IN YOUR ACCOUNT\n");
                printf("NEW AMOUNT=%f\n\n", x);
                break;
            case 'd':
                printf("ENTER DEBIT AMOUNT\n");
                scanf("%f", &y);
                if (x >= y)
                {
                    x = x - y;													//sub
                    printf("NEW AMOUNT=%f\n\n", x);
                }
                else
                {
                    printf("INSUFFICIENT AMOUNT IN YOUR ACCOUNT\n");
                }
                break;
            case 'b':
                printf("YOUR ACCOUNT BALANCE=%f\n\n", x);
                break;
            case 'e':
                printf("EXIT\n\n");												//exit operation performed in while loop
                printf("REMOVE YOUR CARD\n");
                exit(0);
                break;
            default:
                printf("CHOOSE CORRECT OPERATION\n\n");							//operation are wrong
            }
            printf("THANKS FOR USING SBI SERVICE\n\n\n");
        }
    }
    else
    {
        count = count + 1;
        int k = 3 - count;
        printf("PLEASE VALID ATM PIN\n\n");
        printf("YOUR HAVE %d SUCCESSFUL ATTEMPT\n\n ", k);
        if (count == 3)															//condition for atm blocked
        {
            printf("YOUR CARD HAS BEEN BLOCKED !! \n\n");
            exit(0);
        }

        goto label3;															//jumping statement are define
    }
    return 0;
}
