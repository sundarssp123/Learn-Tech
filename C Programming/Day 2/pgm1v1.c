// Title:Data Type Sample Program     Author:Sundar Ssp     Date:07-01-2023

#include<stdio.h>

int integer_number;                                                   //Integer Variable Declaration
unsigned unsigned_integer_number=99;                                  //Unsigned Integer Initialization
float float_number=3.14;                                              //Float Variable Initialization                  
char character='A';                                                   //Character Varialbe Initialization  

int main()
{
    integer_number=-3;                                                 //Integer Variable Initialization
    printf("The Value of Integer Number : %d\n",integer_number);
    printf("The Value of Unsigned Integer Number : %u\n",unsigned_integer_number);
    printf("The Value of float Number : %.2f\n",float_number);
    printf("The Value of Character : %c\n",character);
    printf("The Value ASCII Value of Character : %d\n",character);
    printf("The Size of Character variable : %d",sizeof(character));
    return 0;
}
