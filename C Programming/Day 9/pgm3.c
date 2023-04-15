//Title:Read and write a file Using C. Author:Sundar Ssp       Date:13-04-2023

#include<stdio.h>

int main()
{
    FILE *fp1;
    FILE *fp2;
    char c;
    fp1=fopen("sample.txt","r");
    fp2=fopen("sample3.txt","w");
    c=getc(fp1);
    while (c!=EOF)
    {
        printf("%c",c);
        putc(c,fp2);
        c=getc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
