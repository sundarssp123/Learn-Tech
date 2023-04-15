//Title:Double Pointers   Author:Sundar Ssp    Date:07-04-2023

#include<stdio.h>

int myage=27;
int *ptr1=&myage;
int **ptr2=&ptr1;

int main()
{
    printf("The Address of myage is :%p\n",myage);
    printf("The Address of ptr1 is :%p\n",ptr1);
    printf("The Address of ptr2 is :%p\n",ptr2);

    printf("The Dereference value of ptr1 is: %d\n",*ptr1);
    printf("The Dereference value of ptr2 is: %p\n",*ptr2);
    printf("The Double Dereference value of ptr2 is: %d\n",**ptr2);
    return 0;
}
