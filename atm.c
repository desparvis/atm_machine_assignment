#include <stdio.h>

/**
 * C Program that functions as an ATM Machine
 */

// Function to check balance 
int check_balance(int bal)
{
    return bal;
}

// Function to deposit funds
int deposit(int amount, int bal)
{
    return bal + amount;
}

// Function to withdraw funds
int withdraw(int amount, int bal)
{
    return bal - amount;
}

// Function that runs the whole program
int main()
{
    // Declaring all needed variables
    int balance = 0, amount, wtd_amount;
    char ins;
    // Making a loop that keeps running the program until the user exits
    while (1)
    {   
        // Making a welcome menu that show the user valid inputs
        printf("***Welcome to the ATM machine***\n");
        printf("Press 1 to check balance\n");
        printf("Press 2 to deposit\n");
        printf("Press 3 to withdraw\n");
        printf("Press X or x to exit\n:");
        // Taking the input into a character variable
        scanf(" %c", &ins);
        // Conditional statements that check the input to do different actions
        if (ins == 'x' || ins == 'X')
        {   
            //Helps the user break the program by using x or X
            break;
        }
        else if (ins == '1')
        {   
            // Shows the current balance
            printf("\nTHE BALANCE IS $ %d\n\n", check_balance(balance));
        }
        else if (ins == '2')
        {   
            // Helps to deposit
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
            // Helps to withdraw
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