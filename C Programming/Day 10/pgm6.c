//Title:Armstrong Number  Author:Sundar Ssp       Date:20-04-2023

#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
    int reminder,armstrngnum=0,digits=0,orginalnum;
    orginalnum=n;

    while (n>0)
    {
        n=n/10;
        digits++;
    }
    n=orginalnum;
    while (n>0)
    {
        reminder=n%10;
        armstrngnum+=pow(reminder,digits);     
        n=n/10;
    }
    return armstrngnum;
    
}

int main()
{
    int input=9474;
    int result;
    result=armstrong(input);
    printf("%d",result);
    if(result==input)
        printf("This is armstrong number\n");
    else
        printf("This is not a armstrong number\n");
    return 0;
}
