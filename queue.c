#include<stdio.h>

int queue[5];

int front=-1;
int rear=-1;

void enqueue()
{
    int value;

    if(rear==4)
    {
        printf("Queue Full\n");

        return;
    }

    printf("Enter data:");

    scanf("%d",&value);

    if(front==-1)
    {
        front=0;
    }

    rear++;

    queue[rear]=value;

    printf("Inserted\n");
}

void dequeue()
{
    if(front==-1)
    {
        printf("Queue Empty\n");

        return;
    }

    printf("Deleted=%d\n",queue[front]);

    if(front==rear)
    {
        front=-1;

        rear=-1;
    }
    else
    {
        front++;
    }
}

void display()
{
    if(front==-1)
    {
        printf("Queue Empty\n");

        return;
    }

    printf("Queue: ");

    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }

    printf("\n");
}

void peek()
{
    if(front==-1)
    {
        printf("Queue Empty\n");

        return;
    }

    printf("Front=%d\n",queue[front]);
}

void isEmpty()
{
    if(front==-1)
    {
        printf("Queue Empty\n");
    }
    else
    {
        printf("Queue Not Empty\n");
    }
}

void isFull()
{
    if(rear==4)
    {
        printf("Queue Full\n");
    }
    else
    {
        printf("Queue Not Full\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== QUEUE =====\n");

        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Peek\n");
        printf("5.isEmpty\n");
        printf("6.isFull\n");
        printf("7.Exit\n");

        printf("Enter choice:");

        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                isEmpty();
                break;

            case 6:
                isFull();
                break;

            case 7:
                printf("BYE\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=7);

    return 0;
}
