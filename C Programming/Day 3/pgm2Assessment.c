//Title:Operators-Assignment    Author:Sundar Ssp   Date:27-01-2023

#include<stdio.h>
int number1,number2,result,temp;

int main()
{
    printf("Enter Number1:");
    scanf("%d",&number1);                                               //Get Number1 From User using Scanf   
    printf("Enter Number2:");
    scanf("%d",&number2);                                               //Get Number2 From User using Scanf 

    printf("Assignment Operators\n\n");
    printf("Before Swap\n");
    printf("The Value of Number1 is :%d\n",number1);                    //Print the value of Number-1
    printf("The Value of Number2 is :%d\n\n",number2);                  //Print the value of Number-2

    temp=number1;
    number1=number2;
    number2=temp;
    printf("After Swap\n");
    printf("The Value of Number1 is :%d\n",number1);                    //Print the value of Number-1
    printf("The Value of Number2 is :%d\n\n",number2);                  //Print the value of Number-2

    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;

    printf("After Swap2\n");
    printf("The Value of Number1 is :%d\n",number1);                    //Print the value of Number-1
    printf("The Value of Number2 is :%d\n\n",number2);                  //Print the value of Number-2

    return 0;
}