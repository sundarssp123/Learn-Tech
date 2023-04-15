//Title:Pointers-Simple Example   Author:Sundar Ssp    Date:06-04-2023

#include<stdio.h>

int myage=27;
int *ptr=&myage;

int main()
{
    printf("The Address of myage is :%p\n",&myage);
    printf("The Address of ptr is :%p\n",&ptr);
    printf("The Value of ptr is :%p\n",ptr);
    printf("The Dereference Value of ptr is :%d\n",*ptr);
    printf("The Value of myage is :%d\n",*ptr);
    return 0;
}