//Title:Operators-Logicial    Author:Sundar Ssp   Date:27-01-2023

#include<stdio.h>
int number1,number2,result,temp;

int main()
{
    printf("Enter Number1:");
    scanf("%d",&number1);                                                //Get Number1 From User using Scanf   
    printf("Enter Number2:");
    scanf("%d",&number2);                                                //Get Number2 From User using Scanf 

    printf("Logicial Operators\n\n");

    printf("Logical AND result :%d\n",(number1>0) && (number1<5));       //Check Number1 is greater than Number 0 and less than 5
    printf("Logical OR result :%d\n",(number1>0) || (number1<5));        //Check Number1 is greater than Number 0 and less than 5
    printf("Logical NOT result :%d\n",!(number1>0));                     //Check Number1 is greater than Number 0 and do logical NOT 

    return 0;
}