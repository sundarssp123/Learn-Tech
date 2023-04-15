//Title:Get the names form file  Author:Sundar Ssp       Date:14-04-2023

#include<stdio.h>

int main()
{
    FILE *fp;
    char c;
    char name[10];
    int i=0;
    fp=fopen("names.txt","r");
    if(fp==NULL)
    {
        printf("The File doesn't Exit\n");
        return -1;
    }
    c=getc(fp);
    while (c!=EOF)
    {
        if(c!=',')
        {
            name[i]=c;
            i++;
        }
        else
        {
            name[i]='\0';
            printf("%s\n",name);
            i=0;
        }
        c=getc(fp);
    }
    //Print last name
    if(i>0)
    {
        name[i]='\0';
        printf("%s",name);
    }
    fclose(fp);
    return 0;
}
