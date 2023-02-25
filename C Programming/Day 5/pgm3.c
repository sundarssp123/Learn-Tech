//Title:Search Element in the array Author:Sundar Ssp       Date:23-02-2023

#include<stdio.h>

int find=33,i,n[5]={56,87,98,34,2};
int flag=0;

int main()
{
    for(i=0;i<5;i++)
    {
        if(find==n[i])
        {
            printf("%d is found at n[%d]\n",find,i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Element not found\n");
    }
    return 0;
}




