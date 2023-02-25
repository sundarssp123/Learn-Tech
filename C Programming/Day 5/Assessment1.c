//Title:Find Positive,Negative and Zero in the array  Author:Sundar Ssp       Date:25-02-2023

#include <stdio.h>

int main() {
   int size, i, posCount = 0, negCount = 0, zeroCount = 0;

   printf("Enter the size of the array: ");
   scanf("%d", &size);
   int arr[size];

   printf("Enter %d elements in the array:\n", size);
   for (i = 0; i < size; i++) 
   {
      scanf("%d", &arr[i]);
      
      if (arr[i] > 0) 
      {
         posCount++;
      }
      else if (arr[i] < 0)
      {
         negCount++;
      }
      else 
      {
         zeroCount++;
      }
   }

   printf("Number of positive elements in the array: %d\n", posCount);
   printf("Number of negative elements in the array: %d\n", negCount);
   printf("Number of zero elements in the array: %d\n", zeroCount);

   return 0;
}
