//Title: Operators-Arithmetic   Author: Sundar Ssp  Date: 28-01-2023

#include<stdio.h>

int number1,number2,result;

int main()
{
    number1=10;
    number2=3;

    printf("Arithmetic Operators\n\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    result=number1+number2;
    printf("Addition Result is : %d\n",result);
    result=number1-number2;
    printf("Subtraction Result is : %d\n",result);
    result=number1*number2;
    printf("Multiplication Result is : %d\n",result);
    result=number1/number2;
    printf("Division Result is : %d\n",result);
    result=number1%number2;
    printf("Mod Result is : %d\n\n",result);

    printf("Addition Result is : %d\n",number1+number2);
    printf("Subtraction Result is : %d\n",number1-number2);
    printf("Multiplication Result is : %d\n",number1*number2);
    printf("Division Result is : %d\n",number1/number2);
    printf("Mod Result is : %d\n",number1%number2);
    return 0;
}

