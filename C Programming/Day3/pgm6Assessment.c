//Title:Operators-Relational    Author:Sundar Ssp   Date:27-01-2023

#include<stdio.h>
int number1,number2,result,temp;
double dnumber=2;

int main()
{
    printf("Enter Number1:");
    scanf("%d",&number1);                                                        //Get Number1 From User using Scanf   
    printf("Enter Number2:");
    scanf("%d",&number2);                                                        //Get Number2 From User using Scanf 

    printf("Relational Operators\n\n");

    printf("The result of Number1>Number2 :%d\n",number1>number2);               //Check Number1 is greater than Number 2
    printf("The result of Number1<Number2 :%d\n",number1<number2);               //Check Number1 is less than Number 2
    printf("The result of Number1>=Number2 :%d\n",number1>=number2);             //Check Number1 is greaterthan or equal to Number2
    printf("The result of Number1<=Number2 :%d\n",number1<=number2);             //Check Number1 is lessthan or equal to Number2
    printf("The result of Number1==Number2 :%d\n",number1==number2);             //Check Number1 is equal to Number2
    printf("The result of Number1!=Number2 :%d\n",number1!=number2);             //Check Number1 is not equal to Number2

    printf("The result :%d\n",sizeof(number1)>sizeof(dnumber));                  //Check size of Number1 is greater than size of Number 2
    return 0;
}