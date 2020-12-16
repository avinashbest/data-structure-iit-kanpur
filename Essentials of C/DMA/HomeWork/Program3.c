#include <stdio.h>
#include <stdlib.h>
//Create a structure for emp and access the members of structure using pointer structure variable.

struct employee
{ //Creating structure of employee
    int emp_Id;
    float salary;
};

int main(void)
{
    struct employee s1;
    struct employee *ptr_emp = &s1;
    //Accessing structure member using pointer structure variable.
    ptr_emp->emp_Id = 101;
    ptr_emp->salary = 10000;

    printf("Employee ID: %d\n", s1.emp_Id);
    printf("Employee ID: %f\n", s1.salary);
    return 0;
}