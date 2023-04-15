//Title:Passing arrays to functions using pointers   Author:Sundar Ssp    Date:07-04-2023

#include<stdio.h>

int printArray(int* arr, int size) 
{
    int i;
    
    for(i = 0; i < size; i++) 
    {
        printf("%d ", *(arr + i));
    }
    
    printf("\n");
    return 0;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}
