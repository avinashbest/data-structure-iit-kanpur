/*Write a program to convert velocity from km/hr to m/s*/
#include <stdio.h>
void main()
{
    float km_hr, m_s;
    printf("Enter the velocity in km/hr: ");
    scanf("%f", &km_hr);

    m_s = km_hr * (float)5 / 18; //conversion

    printf("The velocity in metre per second is %f m/s", m_s);
}