//Title: Operators-Assignment   Author: Sundar Ssp  Date: 28-01-2023

#include<stdio.h>

int number1,number2,result,temp;

int main()
{
    number1=10;
    number2=3;

    printf("Assignment Operators\n\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    temp=number1;
    number1=number2;
    number2=temp;

    printf("After Swap\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;

    printf("After Swap2\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    return 0;
}

