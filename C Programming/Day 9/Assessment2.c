//Title:Assessment-1  Author:Sundar Ssp       Date:15-04-2023

#include <stdio.h>

int main() 
{
    FILE *inputFile, *outputFile;
    char ch;
    int count = 0;

    inputFile = fopen("sample.txt", "r");

    if (inputFile == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) 
    {
        if (ch == '\n') 
        {
            count++;
        }
    }

    fclose(inputFile);

    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) 
    {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(outputFile, "The file contains %d lines.", count + 1);

    fclose(outputFile);

    return 0;
}
