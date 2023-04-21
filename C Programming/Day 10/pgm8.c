//Title:Bubble Sorting  Author:Sundar Ssp       Date:20-04-2023

#include<stdio.h>

int main()
{
    int num[5]={4,2,1,5,3};
    int size=sizeof(num)/sizeof(num[0]);
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j+1];
                num[j+1]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}