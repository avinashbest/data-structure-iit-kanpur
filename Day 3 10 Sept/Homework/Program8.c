/*Write a program to calculate the simple interest.*/
#include <stdio.h>

void main()
{
    float principal, rate, time, SI;
    printf("Enter the principal value: ");
    scanf("%f", &principal);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("Enter the time for interest in year: ");
    scanf("%f", &time);

    SI = (principal * rate * time) / 100; //Calculation

    printf("Simple interest = %f", SI);
}