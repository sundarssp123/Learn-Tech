//Title:Call By Value   Author:Sundar Ssp    Date:06-04-2023

#include<stdio.h>

int increment(int n)
{
    n++;
    return 0;
}

int main()
{
    int num=10;
    increment(num);
    printf("The Value of num is :%d\n",num);
    return 0;
}
