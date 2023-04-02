//Title:Pre-Defined Funcations-String  Author:Sundar Ssp       Date:01-03-2023

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char str1[10]="Learn";
char str2[10]="Tech";
char str3[10];

int main()
{
    printf("The Length of the string-1 is :%d\n",strlen(str2));
    strcpy(str3,str1);
    printf("The Value of String-3 After strcpy function execution: %s\n",str3);
    strcat(str1,str2);
    printf("The Value of String-1 After strcat function execution: %s\n",str1);
    printf("String Comparision between string-1 and string-3 is :%d\n",strcmp(str3,"Learn"));
    printf("The value of the String-1 After strlwr :%s\n",strlwr(str1));
    printf("The value of the String-1 After strupr :%s\n",strupr(str1));
    printf("The value of the String-1 After strrev :%s\n",strrev(str1));
    return 0;    
}
