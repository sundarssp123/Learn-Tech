//Title:Prime Number  Author:Sundar Ssp       Date:18-04-2023

#include<stdio.h>
#include<math.h>

int input,i;
int flag=1;

int main()
{
    printf("Enter the positive number:");
    scanf("%d",&input);

    if(input<=1)
        flag=0;
    else if(input==2)
        flag=1;
    else if(input%2==0)
        flag=0;
    else
    {
        for(i=3;i<=sqrt(input);i+=2)
        {
            if(input%i==0)
                flag=0;
        }
    }
    if(flag)
        printf("The given number is prime number\n");
    else
        printf("The given number is not a prime number\n");
    return 0;
}