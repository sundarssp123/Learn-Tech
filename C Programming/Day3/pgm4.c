//Title: Operators-Unary   Author: Sundar Ssp  Date: 28-01-2023

#include<stdio.h>

int number1,number2,result,temp;

int main()
{
    number1=10;
    number2=3;

    printf("Unary Operators\n\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    printf("The value of Number1 is : %d\n",++number1);
    printf("The value of Number1 is : %d\n",number1++);
    printf("The value of Number1 is : %d\n",number1);

    printf("The value of Number1 is : %d\n",--number1);
    printf("The value of Number1 is : %d\n",number1--);
    printf("The value of Number1 is : %d\n",--number1);

    
    return 0;
}

