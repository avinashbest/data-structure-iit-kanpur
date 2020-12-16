#include<stdio.h>
// WAP to ask a number and power to be calculated for that number.
void calculate_power(int,int);

int main()
{
    int b,e;
    printf("Enter the base\n");
    scanf("%d",&b);
    printf("Enter the exponent\n");
    scanf("%d",&e);
    calculate_power(b,e);
    return 0;
}

void calculate_power(int b,int e)
{
    int power=1;
    while(e>0)
    {
        power=power*b;
        e--;
    }
    printf("The power of the no = %d",power);
}
