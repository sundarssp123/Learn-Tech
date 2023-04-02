//Title:Stack-DataStructure   Author:Sundar Ssp    Date:29-03-2023

#include<stdio.h>
#define MAXSIZE 5

int stack[MAXSIZE];
int top=-1;

int push(int element)
{
    if(top==MAXSIZE-1)
    {
        printf("Stack Overflow\n");
        return -1;
    }
    top++;
    stack[top]=element;
    return 0;
}

int pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    top--;
    return 0;
}

int stackdisplay()
{
    for(int i=top;i>=0;i--)
    {
        printf("[%d]\n",stack[i]);
    }
    return 0;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    stackdisplay();
    printf("\n");
    pop();
    pop();
    stackdisplay();
    return 0;
}
