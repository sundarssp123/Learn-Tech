//Title:Palindrome String  Author:Sundar Ssp       Date:19-04-2023

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20]="radar";
    int i,flag=0;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-1-i])
            flag=1;
    }
    if(flag)
        printf("This is not a palindrome string\n");
    else    
        printf("The given string is palindrome string\n");
    return 0;
}