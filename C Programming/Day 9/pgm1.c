//Title:Read a file Using C. Author:Sundar Ssp       Date:13-04-2023

#include<stdio.h>

int main()
{
    FILE *fp;
    char c;
    fp=fopen("sample.txt","r");
    if(fp==NULL)
    {
        printf("The File doesn't Exit\n");
        return -1;
    }
    c=getc(fp);
    while (c!=EOF)
    {
        printf("%c",c);
        c=getc(fp);
    }
    fclose(fp);
    return 0;
}
