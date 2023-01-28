//Title:Operators-Bitwise    Author:Sundar Ssp   Date:27-01-2023

#include<stdio.h>
int number1,number2,result,temp;
double dnumber1=2;

int main()
{
    printf("Bitwise Operators\n\n");

    printf("Enter Number1:");
    scanf("%d",&number1);                                        //Get Number1 From User using Scanf   
    printf("Enter Number2:");
    scanf("%d",&number2);                                        //Get Number2 From User using Scanf 

    printf("Bitwise AND result :%d\n",number1&number2);          //Perform bitwise AND operation b/w Number1 and Number2
    printf("Bitwise OR result :%d\n",number1|number2);           //Perform bitwise OR operation b/w Number1 and Number2
    printf("Bitwise XOR result :%d\n",number1^number2);          //Perform bitwise XOR operation b/w Number1 and Number2
    printf("left Shit result :%d\n",number1<<2);                 //Perform left shit by 2
    printf("Right Shit result :%d\n",number1>>2);                //Perform right shift by 2

    return 0;
}