//Title:Single-dimensional-Array Author:Sundar Ssp       Date:23-02-2023

#include<stdio.h>

int i,n[5]={56,87,98,34,2};

int main()
{
    printf("The Size of the Array is :%d\n",sizeof(n));

    for(i=0;i<5;i++)
    {
        printf("The value of n[%d] is:%d\n",i,n[i]);
    }
    return 0;
}




