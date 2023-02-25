//Title:Find the max value Author:Sundar Ssp       Date:23-02-2023

#include<stdio.h>

int max,i,n[5]={56,87,98,34,2};

int main()
{
    max=n[0];
    for(i=1;i<5;i++)
    {
        if(max<n[i])
        {
            max=n[i];
        }
    }
    printf("The maximum value of the array is %d\n",max);
    return 0;
}




