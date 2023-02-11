//Title:Control Statements-Else if   Author:Sundar Ssp       Date:08-02-2023

#include<stdio.h>

int number1,number2;

int main()
{
    printf("Control Statements:ELSE IF\n\n");                            
    printf("Enter the number1:");                                            
    scanf("%d",&number1);                                                       //Get the input from user
    printf("Enter the number2:");                                            
    scanf("%d",&number2);                                                       //Get the input from user

    if(number1>number2)
    {
        printf("Number1 is biggest number\n");
    }    
    else if(number2>number1)
    {
        printf("Number2 is biggest number\n");
    }
    else
    {
        printf("Both numbers are equal\n");   
    }
    
    printf("End of the program\n");
    return 0;
}


