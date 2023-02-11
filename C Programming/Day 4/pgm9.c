//Title:Control Statements-For  Author:Sundar Ssp       Date:10-02-2023

#include<stdio.h>

int i;

int main()
{
    for(i=0;i<5;i++)
    {
        if(i==2)
        {
            continue;
        }
        printf("The value of i is: %d\n",i);
    }    
    return 0;
}



