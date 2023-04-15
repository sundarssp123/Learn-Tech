//Title:Accessing array elements using pointers   Author:Sundar Ssp    Date:07-04-2023

#include<stdio.h>

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    int i;
    
    for(i = 0; i < 5; i++) 
    {
        printf("arr[%d] = %d, *(ptr + %d) = %d, *(arr + %d) = %d\n", i, arr[i], i, *(ptr + i), i, *(arr + i));
    }
    return 0;
}
