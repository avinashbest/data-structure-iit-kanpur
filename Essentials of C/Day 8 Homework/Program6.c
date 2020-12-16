// WAP that takes a choice from user and perform following using function:
// 	choices		Operation
// 	1		Check even
// 	2		prime
// 	3		display factorial
// 	otherwise Invalid input

#include <stdio.h>

void check_even();
void check_prime();
void factorial();

int main()
{
    int choice;
    while (1)
    {
        printf("\nPress 1 for check Even.");
        printf("\nPress 2 to check Prime.");
        printf("\nPress 3 for Factorial.");
        printf("\nPress 0 to exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            check_even();
        }
        else if (choice == 2)
        {
            check_prime();
        }
        else if (choice == 3)
        {
            factorial();
        }
        else if (choice == 0)
        {
            printf("Thanks for using!!!");
            return 0;
        }
        else
        {
            printf("Invalid Input\n");
        }
    }
    return 0;
}

void check_even()
{
    int a;
    printf("\nEnter the number to check whether it is even or odd?\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The given number is even.\n");
    }
    else
    {
        printf("The given number is odd.\n");
    }
}
void check_prime()
{
    int number, prime = 1;
    printf("Enter the number to check whether it is prime or not: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("The given number is not prime.\n");
    }
    else
    {
        printf("The given number is prime.\n");
    }
}
void factorial()
{
    int number;
    long unsigned int factorial = 1;
    printf("\nEnter the number to get the factorial: ");
    scanf("%d", &number);
    //Calculation using for loop.
    for (int i = 1; i <= number; i++)
    {
        factorial *= i; //factorial = fatorial * i
    }

    printf("The value of factorial %d is %d\n", number, factorial);
}