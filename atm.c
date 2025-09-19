#include <stdio.h>

int check_balance(int bal)
{
    return bal;
}
int deposit(int amount, int bal)
{
    return bal + amount;
}
int withdraw(int amount, int bal)
{
    return bal - amount;
}
int main()
{
    int balance = 0, amount, wtd_amount;
    char ins;
    while (1)
    {
        printf("***Welcome to the ATM machine***\n");
        printf("Press 1 to check balance\n");
        printf("Press 2 to deposit\n");
        printf("Press 3 to withdraw\n");
        printf("Press X or x to exit\n:");

        scanf(" %c", &ins);

        if (ins == 'x' || ins == 'X')
        {
            break;
        }
        else if (ins == '1')
        {
            printf("\nTHE BALANCE IS $ %d\n\n", check_balance(balance));
        }
        else if (ins == '2')
        {
            printf("How much do you want to deposit: ");
            scanf("%d", &amount);
            if (amount > 0)
            {
                balance = deposit(amount, balance);
                printf("\nYOU HAVE DEPOSITED $ %d\n\n", amount);
            }
            else
            {
                printf("\nINVALID INPUT, TRY AGAIN!\n\n");
            }
        }
        else if (ins == '3')
        {
            printf("How much do you want to withdraw: ");
            scanf("%d", &amount);
            if (amount <= balance && amount > 0)
            {
                balance = withdraw(amount, balance);
                printf("\nYOU HAVE WITHDRAWN $ %d.\n", amount);
                printf("REMAINING FUNDS: $ %d\n\n", balance);
            }
            else
            {
                printf("\nINSUFFICIENT FUNDS, TRY AGAIN\n\n");
            }
        }
        else
        {
            printf("INVALID INPUT, TRY AGAIN!");
        }
    }
}