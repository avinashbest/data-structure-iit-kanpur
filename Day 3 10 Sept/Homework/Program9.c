/*Write a program to calculate the compound interest.*/
#include <stdio.h>

#include <stdio.h>
#include <math.h>

void main()
{
    float principle, rate, time, CI;

    /* Input principle, time and rate */
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    /* Calculate compound interest */
    CI = principle * (pow((1 + rate / 100), time));

    /* Print the resultant CI */
    printf("Compound Interest = %f", CI);
}