#include <stdio.h>

int queue[10];
int rear, front;

void insert();
void show();

int main(void)
{
    front = -1;
    rear = -1;
    insert();
    show();
    return 0;
}

void insert()
{
    if (rear == 9)
    {
        printf("\nQueue is Full!\n");
    }
    else
    {
        front = 0;
        rear = 0;
        for (; rear < 10; rear++)
        {
            printf("Enter Element in Queue: ");
            scanf("%d", &queue[rear]);
        }
    }
}

void show()
{
    for (; front < rear; front++)
    {
        printf("%d\t", queue[front]);
    }
}
