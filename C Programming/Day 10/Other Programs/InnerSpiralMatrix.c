#include<stdio.h>

int print(int a[7][7],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf(" %d  ",a[i][j]);		
		printf("\n\n");	
	}
	return 0;
}	
int main()
{
	int a[7][7]={};
	int i,j,k,n=7,mid=n/2,count=0;
	a[mid][mid]=++count;
	for(i=0;i<mid;i++)
	{
		for(j=mid-i;j<mid+1+i;j++)
			a[j][mid+1+i]=++count;
		for(j=mid+1+i;j>=mid-i;--j)
			a[mid+1+i][j]=++count;
		for(j=mid+1+i;j>=mid-i;--j)
			a[j][mid-1-i]=++count;
		for(j=mid-1-i;j<=mid+1+i;j++)
			a[mid-1-i][j]=++count;
	}
	print(a,7);
	printf("\nInnerSpiral:\n%d",a[mid][mid]);
	for(i=0;i<mid;i++)
	{
		for(j=mid-i;j<mid+1+i;j++)
			printf(" %d ",a[j][mid+1+i]);
		for(j=mid+1+i;j>=mid-i;--j)
			printf(" %d ",a[mid+1+i][j]);
		for(j=mid+1+i;j>=mid-i;--j)
			printf(" %d ",a[j][mid-1-i]);
		for(j=mid-1-i;j<=mid+1+i;j++)
			printf(" %d ",a[mid-1-i][j]);
	}
	printf("\n\nOutterSpiral:\n");
	for(i=mid;i>0;--i)
	{
		for(j=mid-i;j<mid+i;j++)
			printf(" %d ",a[mid-i][j]);

		for(j=mid-i;j<mid+i;j++)
			printf(" %d ",a[j][mid+i]);

		for(j=mid+i;j>mid-i;--j)
			printf(" %d ",a[mid+i][j]);

		for(j=mid+i;j>mid-i;--j)
			printf(" %d ",a[j][mid-i]);
	}
	printf("%d",a[mid][mid]);
	return 0;
}
