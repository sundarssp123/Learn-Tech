//Title:Factorial Number  Author:Sundar Ssp       Date:18-04-2023

#include<stdio.h>

long fact=1;
int i,input;

int main()
{
    printf("Enter the Number :");
    scanf("%d",&input);

    if(input<0)
    {
        printf("Error: Factorial of a negative number does not exits\n");
        return -1;
    }
    else if (input==0 || input==1)
    {
        printf("The Factorial of %d is 1\n",input);
    }
    else
    {
        for(i=2;i<=input;i++)
        {
            fact=fact*i;
        }
        printf("The factorial of %d is %ld\n",input,fact);   // ld for long int 
    }
    return 0;
}
