#include<stdio.h>

int main()
{
	int a[10][10];
	int iRow,iColoum,n,i,j,k;
	printf("Enter the Row and coloum:");
	scanf("%d%d",&iRow,&iColoum);
	n=iRow*iColoum;
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iColoum;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Before Spiral\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iColoum;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("After Spiral\n");

	int p=iRow,num,m;
	j=0;
	for(i=p-1;i>0;i--,j++)
	{
		printf("For\n");
		for(num =j;num<i;num++)
		{
		//	printf("Ai:%d\t",i);
			printf("%d\n",a[j][num]);
		}
		for(num =j;num<i;num++)
		{
		//	printf("Bi:%d\t",i);
			printf("%d\n",a[num][i]);
		}
		for(num = i;num > j;num--)
		{
		//	printf("Ci:%d\t",i);
			printf("%d\n",a[i][num]);
		}
		for(num =i;num > j;num--)
		{
		//	printf("Di:%d\t",i);
			printf("%d\n",a[num][j]);
		}
	}
	m = (p-1)/2;
	if(p%2==1)
		printf("%d",a[m][m]);
	printf("\n\n");
	return 0;
}
