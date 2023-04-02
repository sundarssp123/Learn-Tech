//Title:Queue-DataStructure   Author:Sundar Ssp    Date:30-03-2023

#include <stdio.h>
#define MAXSIZE 5

int queue[MAXSIZE];
int front=0,rear=-1;

int enqueue(int element)
{
    if(rear==MAXSIZE-1)
    {
        printf("Queue Overflow\n");
        return -1;
    }
    rear++;
    queue[rear]=element;
    return 0;
}

int dequeue()
{
    if(front>rear)
    {
        printf("Queue Underflow\n");
        return -1;
    }
    front++;
    return 0;
}

int displayqueue()
{
    for(int i=front;i<=rear;i++)
    {
        printf("[%d]\t",queue[i]);
    }
    return 0;
}

int main()
{
    int element=0,choice;
    printf("\n\t QUEUE OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter the Element: ");
                scanf("%d",&element);
                enqueue(element);
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                displayqueue();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);

    return 0;
}