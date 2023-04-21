//Title:Count Vowels  Author:Sundar Ssp       Date:20-04-2023

#include <stdio.h>
#include <string.h>

int main()
{
    char *str="sundarAYTE";
    int count=0,i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }        
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            count++;
        }
    }
    printf("vowels count:%d",count);
    return 0;
}