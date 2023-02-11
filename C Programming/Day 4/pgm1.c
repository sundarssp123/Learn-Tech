//Title:Control Statements-if    Author:Sundar Ssp       Date:08-02-2023

#include<stdio.h>

int age;

int main()
{
    printf("Control Statements:IF\n\n");                            
    printf("Enter the age:");                                            
    scanf("%d",&age);                                                       //Get the input from user

    if(age>=18)
    {
        printf("You are Eligible to vote\n");
    }

    printf("End of the program\n");
    return 0;
}


