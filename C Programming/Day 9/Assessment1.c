//Title:Assessment-1  Author:Sundar Ssp       Date:15-04-2023

#include <stdio.h>

int main() 
{
    FILE *inputFile, *outputFile;
    char ch;
    int count = 0;

    inputFile = fopen("input.txt", "r");

    if (inputFile == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) 
    {
        count++;
    }

    fclose(inputFile);

    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) 
    {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(outputFile, "The file contains %d characters.", count);

    fclose(outputFile);

    return 0;
}
