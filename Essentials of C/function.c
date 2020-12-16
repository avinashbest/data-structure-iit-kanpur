#include <stdio.h>

void fun(); //Function Declaration

void main()
{
    printf("First message");
    fun(); //Function Calling
    printf("Ending");
}

void fun() //Function Definition
{
    printf("Message from UDF");
}