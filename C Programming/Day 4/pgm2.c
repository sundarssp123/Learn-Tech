//Title:Control Statements-If else   Author:Sundar Ssp       Date:08-02-2023

#include<stdio.h>

int number1;

int main()
{
    printf("Control Statements:IF ELSE\n\n");                            
    printf("Enter the number:");                                            
    scanf("%d",&number1);                                                       //Get the input from user

    if(number1%2==0)
    {
        printf("The given number is even number\n");
    }
    else
    {
        printf("The given number is odd number\n");
    }

    printf("End of the program\n");
    return 0;
}


