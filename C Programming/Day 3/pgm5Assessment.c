//Title:Operators-Conditional    Author:Sundar Ssp   Date:27-01-2023

#include<stdio.h>
int number1,number2,result,temp;

int main()
{
    printf("Enter Number1:");
    scanf("%d",&number1);                                                        //Get Number1 From User using Scanf   
    printf("Enter Number2:");
    scanf("%d",&number2);                                                        //Get Number2 From User using Scanf 

    printf("Conditional Operators\n\n");

    result=(number1>0) ? 1:0;                                                    //Chekck the number1 is greater than zero
    printf("The Value of result is: %d\n",result);                               //Yes Print-1 No Print-0

    result=(number1>0) ? printf("Positive Number"):printf("Negative Number");    //Print the result directly
    return 0;
}