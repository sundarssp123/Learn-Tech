//Title: User-Defined Function  Author:Sundar Ssp       Date:09-03-2023

#include<stdio.h>

    int a=10;

int userprint()
{
    printf("User Defined Function Entry\n");
    printf("The Value of a is: %d\n",a);
    return 0;
}

int oddoreven(int num)
{
    if(num%2==0)
    {
        return 2;
    }
    else
    {
        return 1;
    }
    return 0;
}

int main()
{
    int result;
//    printf("Main Function Entry\n");
//    printf("The Value of a is: %d\n",a);
//    userprint();
    result=oddoreven(7);
    printf("The Result is :%d\n",result);
    if(result==1)
    {
        printf("Odd Number\n");
    }
    else if(result==2)
    {
        printf("Even NUmber\n");
    }
    return 0;
}

