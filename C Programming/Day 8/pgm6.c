//Title:Char Double Pointers   Author:Sundar Ssp    Date:07-04-2023

#include<stdio.h>

int strchange(char **str2)
{
    printf("The address of *str2 is :%p\n",*str2);
    *str2="tech";
    return 0;
}

int main()
{
    char *str1="learn";
    printf("The address of learn is :%p\n",str1);
    printf("The address of str1 is :%p\n",&str1);

    strchange(&str1);
    printf("The Value of str1 is :%s\n",str1);
    return 0;
}
