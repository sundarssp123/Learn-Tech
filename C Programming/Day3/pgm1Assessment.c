//Title:Operators-Arithmetic    Author:Sundar Ssp   Date:27-01-2023

#include<stdio.h>
int number1,number2,result;

int main()
{
    printf("Enter Number1:");
    scanf("%d",&number1);                                               //Get Number1 From User using Scanf   
    printf("Enter Number2:");
    scanf("%d",&number2);                                               //Get Number2 From User using Scanf 

    printf("Arithmetic Operators\n\n");
    printf("The Value of Number1 is :%d\n",number1);                    //Print the value of Number-1
    printf("The Value of Number2 is :%d\n\n",number2);                  //Print the value of Number-2

    result=number1+number2;                                             //Add two numbers using result variable
    printf("Addition Result is %d\n",result);                           //Print the result

    result=number1-number2;                                             //Subtract two numbers using result variable
    printf("Subtraction Result is %d\n",result);                        //Print the result
    
    result=number1*number2;                                             //Divide two numbers using result variable                  
    printf("Multiplication Result is %d\n",result);                     //Print the result
    
    result=number1/number2;                                             //Divide two numbers using result variable           
    printf("Division Result is %d\n",result);                           //Print the result
    
    result=number1%number2;                                             //Mod two numbers using result variable
    printf("Mod Result is %d\n\n",result);                              //Print the result

    printf("Addition result is:%d\n",number1+number2);                  //Add two numbers and directly print the result
    printf("Subtraction result is:%d\n",number1-number2);               //Subract two numbers and directly print the result
    printf("Multipilcation result is:%d\n",number1*number2);            //Multiply two numbers and directly print the result
    printf("Division result is:%d\n",number1/number2);                  //Divide two numbers and directly print the result
    printf("Mod result is:%d\n",number1%number2);                       //MOd two numbers and directly print the result

    return 0;
}