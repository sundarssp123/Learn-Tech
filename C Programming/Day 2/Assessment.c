//Title: Data Type Assessment Program       Author : Sundar Ssp     Date : 07-01-2023

#include<stdio.h>

int integer_number;                                         //Integer Variable Declaration 
unsigned int unsigned_integer_number;                       //unsigned Integer Variable Declaration 
long int long_integer_number;                               //Long Variable Declaration 
short int short_integer_number;                             //Short Interger Variable Declaration
unsigned short int unsigned_short_number;                   //Unsigned Short Interger Variable Declaration

float float_number;                                         //float Variable Declaration 
double double_number;                                       //Double Variable Declaration 
long double long_double_number;                             //Long Double Variable Declaration 

char character;                                             //Character Variable Declaration 
unsigned char unsigned_character;                           //Unsigned Character Variable Declaration

int main()
{
    integer_number=-90;                                     //Integer Variable Initialization 
    unsigned_integer_number=200;                            //unsigned Integer Variable Initialization 
    long_integer_number=2380072;                            //Long Variable Initialization 
    short_integer_number=-8;                                //Short Interger Variable Initialization
    unsigned_short_number=89;                               //Unsigned Short Interger Variable Initialization

    float_number=6.2;                                       //float Variable Initialization 
    double_number=99.999;                                   //Double Variable Initialization 
    long_double_number=3.14159265359;                       //Long Double Variable Initialization 

    character='a';                                          //Character Variable Initialization 
    unsigned_character='b';                                 //Unsigned Character Variable Initialization

   
    printf("Value of integer_number: %d\n",integer_number);
    printf("Value of unsigned_integer_number: %u\n",unsigned_integer_number);
    printf("Value of long_integer_number: %ld\n",long_integer_number);
    printf("Value of short_integer_number: %hd\n",short_integer_number);
    printf("Value of unsigned_short_number: %hu\n",unsigned_short_number);
    
    printf("Value of float_number: %f\n",float_number);
    printf("Value of double_number: %lf\n",double_number);
    printf("Value of long_double_number: %Lf\n",long_double_number);

    printf("Value of character: %c\n",character);
    printf("Value of unsigned_character: %c\n\n\n",unsigned_character);

    printf("Size of integer_number: %d\n",sizeof(integer_number));
    printf("Size of unsigned_integer_number: %d\n",sizeof(unsigned_integer_number));
    printf("Size of long_integer_number: %d\n",sizeof(long_integer_number));
    printf("Size of short_integer_number: %d\n",sizeof(short_integer_number));
    printf("Size of unsigned_short_number: %d\n",sizeof(unsigned_short_number));
    
    printf("Size of float_number: %d\n",sizeof(float_number));
    printf("Size of double_number: %d\n",sizeof(double_number));
    printf("Size of long_double_number: %d\n",sizeof(long_double_number));

    printf("Size of character: %d\n",sizeof(character));
    printf("Size of unsigned_character: %d\n\n",sizeof(unsigned_character));

    printf("ASCII Value of character: %d\n",character);
    printf("ASCII Value of unsigned_character: %d\n",unsigned_character);
    
    return 0;
}