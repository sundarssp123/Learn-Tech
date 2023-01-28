//Title: Operators-Logical   Author: Sundar Ssp  Date: 28-01-2023

#include<stdio.h>

int number1,number2,result,temp;
double dnumber=1;

int main()
{
    number1=6;
    number2=3;

    printf("Logical Operators\n\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    printf("AND Result is : %d\n",(number1>0)&&(number1<5));
    printf("OR Result is : %d\n",(number1>0)||(number1<5));
    printf("NOT Result is : %d\n",!(number1>0));
    return 0;
}

