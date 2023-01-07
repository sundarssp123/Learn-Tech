// Title:Data Type Sample Program     Author:Sundar Ssp     Date:07-01-2023

#include<stdio.h>

int integer_number;                                                   //Integer Variable Declaration
unsigned unsigned_integer_number=-99;                                  //Unsigned Integer Initialization
float float_number=8;                                              //Float Variable Initialization                  
//char character='1';                                                   //Character Varialbe Initialization  
char character[10]={'L','E','A','R','N',' ','T','E','C','H'};

int main()
{
    integer_number=3.12;                                                 //Integer Variable Initialization
    printf("The Value of Interger Number : %d\n",integer_number);
    printf("The Value of Unsigned Interger Number : %u\n",unsigned_integer_number);
    printf("The Value of float Number : %.2f\n",float_number);
//    printf("The Value of Character : %c\n",character);
    printf("The Value ASCII Value of Character : %d\n",character);
    printf("The Size of Character variable : %d\n",sizeof(character));

    for(int i=0;i<sizeof(character);i++)
        printf("%c",character[i]);
    return 0;
}
