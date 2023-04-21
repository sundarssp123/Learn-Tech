#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,row,coloum,k,sum=0;
	printf("\nEnter the row and coloum:");
	scanf("%d%d",&row,&coloum);
	printf("Enter the Matrix1\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloum;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Matrix2\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloum;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{	
		for(j=0;j<coloum;j++)
		{
			for(k=0;k<row;k++)
			{
				sum = sum+(a[i][k]/b[k][j]);
			}
			c[i][j] = sum;
			sum=0;
		}
	}
	printf("product of Matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloum;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}		
	return 0;
}
