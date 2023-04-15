//Title:Dynamic memory allocation using pointers   Author:Sundar Ssp    Date:07-04-2023

#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int* ptr;
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    
    if(ptr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    printf("Enter array elements:\n");
    
    for(i = 0; i < n; i++) 
    {
        scanf("%d", ptr + i);
    }
    printf("Array elements are:\n");
    
    for(i = 0; i < n; i++) 
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr);
    return 0;
}
