/*Write a program to convert temperature in Farenheit to celsius*/
#include <stdio.h>
//Formula:
// First of all, subtract 32 from the Fahrenheit temperature.
// Multiply this particular number by five now.
// Divide the result which is achieved by nine
void main()
{
    float Fahrenheit;
    float celsius;
    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    celsius = ((Fahrenheit - 32) * 5) / 9; //Conversion

    printf("Temperature correspoding to celsius is: %f ", celsius);
}