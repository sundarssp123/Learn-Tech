//Title: Operators-Conditional   Author: Sundar Ssp  Date: 28-01-2023

#include<stdio.h>

int number1,number2,result,temp;

int main()
{
    number1=-10;
    number2=3;

    printf("Conditional Operators\n\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    result=(number1>number2) ? 1:0;
    printf("Output of Conditional Operation is : %d \n",result);

    (number1>-1) ? printf("Positive Number"):printf("Negative Number");
    return 0;
}

