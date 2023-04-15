//Title:Char Pointers   Author:Sundar Ssp    Date:07-04-2023

#include<stdio.h>

int main()
{
    char ch='a';
    char ch1[10]="sundar";
    char *ch2="ssp";
    printf("The value of ch2 is :%s\n",ch2);
    printf("The address of ch2 is :%p\n",ch2);
    ch2=ch2+1;
    printf("The value of ch2 is :%s\n",ch2);
    printf("The address of ch2 is :%p\n",ch2);

    return 0;
}
