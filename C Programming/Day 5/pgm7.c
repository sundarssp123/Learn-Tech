//Title:Two-dimensional-Array-Sum  Author:Sundar Ssp       Date:24-02-2023

#include<stdio.h>

int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int mat2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
int sum[3][3];
int i,j;

int main()
{
    printf("Matrix-1 Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix-2 Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
        printf("\n");
    }

    printf("Sum Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}




