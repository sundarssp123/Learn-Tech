//Title:Sum of the digits  Author:Sundar Ssp       Date:18-04-2023

#include<stdio.h>

int sumofdigits(int n)
{
    int lastdigit,sum=0;
    while (n>0)
    {
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    return sum;
    
}
int main()
{
    int input=874;
    int result;
    result=sumofdigits(input);
    printf("The sum of digits of a %d is: %d\n",input,result);
    return 0;
}