//Title:Fibonacci Series  Author:Sundar Ssp       Date:20-04-2023

#include<stdio.h>

int main()
{
    int n1=0,n2=1,temp=0;
    int limit=100;
    printf("The fibonacci series is : %d\t%d",n1,n2);
    while (1)
    {
        temp=n1+n2;
        if(temp>limit)                  //Break the loop if the temp is more than 100
            break;
        printf("\t%d",temp);
        n1=n2;
        n2=temp;
    }
    
    return 0;
}