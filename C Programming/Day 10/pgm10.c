//Title:Subtract without using '-'  Author:Sundar Ssp       Date:20-04-2023

#include<stdio.h>

int main()
{
    int a=10,b=14;
    int result;
    result=(~a)+b+1;
    printf("%d",result);
    return 0;
}