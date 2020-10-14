#include <stdio.h>

void show_records(int);
void add_records(int);

struct student
{
    int rollNo;
    float fees;
} s1[1000];

int main()
{
    int n;
    printf("How many records you want to add:");
    scanf("%d", &n);
    
    return 0;
}

void add_records(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &s1[i].rollNo);
        printf("\nEnter Roll No: ");
        scanf("%d", &s1[i].fees);   
    }
}

void show_records(int n)
{
    printf("\nRecords of students Are:\n");
    printf("\nRoll no\t\tFees");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t\t%.2f", s1[i].rollNo, s1[i].fees);
    }
}