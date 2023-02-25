//Title:Find second largest in the array  Author:Sundar Ssp       Date:25-02-2023

#include <stdio.h>

int main() {
   int size, i, largest, secondLargest;
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   int arr[size];

   printf("Enter %d elements in the array:\n", size);
   for (i = 0; i < size; i++) 
   {
      scanf("%d", &arr[i]);
   }

   // Find the largest element in the array
   largest = arr[0];
   for (i = 1; i < size; i++) 
   {
      if (arr[i] > largest) 
      {
         largest = arr[i];
      }
   }

   // Find the second largest element in the array
   secondLargest = arr[0];
   for (i = 1; i < size; i++) 
   {
      if (arr[i] > secondLargest && arr[i] < largest) 
      {
         secondLargest = arr[i];
      }
   }

   printf("The second largest element in the array is %d\n", secondLargest);

   return 0;
}
