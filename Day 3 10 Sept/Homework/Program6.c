/*Write a program to find area and circumference of circle with radius r.*/
#include <stdio.h>
#define PI 3.14

void main()
{
    float r, area, circumference;
    printf("Enter the radius: ");
    scanf("%f", &r);

    area = PI * (r * r);
    circumference = 2 * PI * r;

    printf("Area of the circle is %f\n", area);
    printf("Circumference of the circle is %f\n\n", circumference);
}