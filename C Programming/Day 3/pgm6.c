//Title: Operators-Relational   Author: Sundar Ssp  Date: 28-01-2023

#include<stdio.h>

int number1,number2,result,temp;
double dnumber=1;

int main()
{
    number1=-10;
    number2=3;

    printf("Relational Operators\n\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    printf("The value of Number1 < Number2 is : %d\n",number1<number2);
    printf("The value of Number1 > Number2 is : %d\n",number1>number2);
    printf("The value of Number1 <= Number2 is : %d\n",number1<=number2);
    printf("The value of Number1 >= Number2 is : %d\n",number1>=number2);
    printf("The value of Number1 == Number2 is : %d\n",number1==number2);
    printf("The value of Number1 != Number2 is : %d\n",number1!=number2);

    printf("The result is:%d",number2>dnumber);
    return 0;
}

