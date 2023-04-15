//Title:Write a file Using C. Author:Sundar Ssp       Date:13-04-2023

#include<stdio.h>

int main()
{
    FILE *fp;
    char c;
    char *str="\nI Love my subscribers";
    fp=fopen("sample.txt","a");
    
    if(fp==NULL)
    {
        printf("The File doesn't Exit\n");
        return -1;
    }
    fputs(str,fp);
    fclose(fp);
    return 0;
}
