//Title:Palindrome Number  Author:Sundar Ssp       Date:19-04-2023

#include<stdio.h>

int sumofdigits(int n)
{
    int lastdigit,reverse=0;
    while (n>0)
    {
        lastdigit=n%10;
        reverse=lastdigit+10*reverse;       
        n=n/10;
    }
    return reverse;
    
}

int main()
{
    int input=78587;
    int result;
    result=sumofdigits(input);
    if(result==input)
        printf("This is palindrome number\n");
    else
        printf("This is not a palindrome number\n");
    return 0;
}