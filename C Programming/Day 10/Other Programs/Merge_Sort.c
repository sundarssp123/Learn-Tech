#include<stdio.h>
int a[3]={3,2,1};


void merge(int low,int mid,int high)
{		
	int b[3];
	printf("Merge\n");
	printf("\nMERGE :low:%d\tmid:%d\thigh:%d\n",low,mid,high);

	int l1,l2,i;
	for(l1=low,l2=mid+1,i=low;l1<=mid && l2 <=high;i++)
	{
		if(a[l1] <= a[l2])
			b[i] = a[l1++];
		else
			b[i] = a[l2++];
	}
	while(l1 <= mid)
		b[i++] = a[l1++];
	while(l2 <= high)
		b[i++] = a[l2++];
	for(i=low ;i <= high ; i++)
	{
		a[i] = b[i];
	}	
	printf("Merge Print\n");
	for(i=low;i<=high;i++)
	printf("suma:%d\t",b[i]);
}

void sort(int low , int high)
{
	printf("\nsort");
	int mid;
	if(low < high)
	{	
		mid = (low + high) / 2;
		printf("\nlow:%d\tmid:%d\thigh:%d\n",low,mid,high);
		printf("\n1st");
		sort(low,mid);
		printf("\n2nd");
		sort(mid+1,high);
		merge(low,mid,high);
	}
	else
	{
		return ;
	}
}


int main()
{
	int i,n=3;

	printf("Before Sorting\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

	sort(0,n-1);

	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
		
	return 0;
}
