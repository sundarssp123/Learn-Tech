#include<stdio.h>
int main()
{
	int a[10][10],iNo,iRow,iColoum,i,j;
	printf("Enter the Row and Colum");
	scanf("%d %d",&iRow,&iColoum);
	printf("Enter the Numbers");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iColoum;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Before_Matrix\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iColoum;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("TransForm_Matrix\n");
	for(j=0;j<iRow;j++)
	{
		for(i=0;i<iColoum;i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
	return 0;
}

