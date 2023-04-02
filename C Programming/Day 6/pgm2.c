//Title:Pre-Defined Funcations-Character  Author:Sundar Ssp       Date:01-03-2023

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    printf("Check Whether the character is alphabet or not:%d\n",isalpha('1'));
    printf("Check Whether the character is Numeric or not:%d\n",isdigit('1'));
    printf("Check Whether the character is alphanumeric or not:%d\n",isalnum('*'));
    printf("Check Whether the character is Punction or not:%d\n",ispunct('K'));
    printf("Check Whether the character is Space or not:%d\n",isspace(' '));
    printf("Check Whether the character is Uppercase or not:%d\n",isupper('A'));
    printf("Check Whether the character is Lowercase or not:%d\n",islower('B'));
    printf("Converted Upper case character is :%c\n",toupper('a'));
    printf("Converted Lower case character is :%c\n",tolower('b'));
    return 0;    
}
