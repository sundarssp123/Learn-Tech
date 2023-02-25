//Title:Two-dimensional-Array-Transpose  Author:Sundar Ssp       Date:24-02-2023

#include<stdio.h>

int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int tmatrix[3][3];
int i,j;

int main()
{
    printf("Orginal Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            tmatrix[j][i]=matrix[i][j];
        }
        printf("\n");
    }

    printf("Transpose Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",tmatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}




