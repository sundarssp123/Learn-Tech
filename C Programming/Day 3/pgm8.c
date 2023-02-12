//Title: Operators-Bitwise   Author: Sundar Ssp  Date: 28-01-2023

#include<stdio.h>

int number1,number2,result,temp;
double dnumber=1;

int main()
{
    printf("Enter Number1 \n");
    scanf("%d",&number1);
    printf("Enter Number2 \n");
    scanf("%d",&number2);

    printf("Bitwise Operators\n\n");
    printf("The Value of Number1 is : %d\n",number1);
    printf("The Value of Number2 is : %d\n\n",number2);

    printf("The result of Bitwise AND is : %d\n",number1&number2);
    printf("The result of Bitwise OR is : %d\n",number1|number2);
    printf("The result of Bitwise XOR is : %d\n",number1^number2);

    printf("The result of Bitwise Left Shift is : %d\n",number1<<2);
    printf("The result of Bitwise Risht Shift is : %d\n",number1>>2);

    return 0;
}

