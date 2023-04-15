//Title:Swapping two variables using pointers   Author:Sundar Ssp    Date:07-04-2023

#include<stdio.h>

int swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main() 
{
    int x = 10;
    int y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
