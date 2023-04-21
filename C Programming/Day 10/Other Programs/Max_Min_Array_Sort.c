#include<stdio.h>
int main()
{
	int a[10]={5,2,4,1,3};
	int kk=0;
	int i,j=0,k=0,temp,n=5;
 	int b[10],c[20];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				kk++;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("K:%d\n",kk);
	for(i=0;i<n;i++)
		printf("sorted array:%d\n",a[i]);
	j=0;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			b[i]=a[n-k-1];
			k++;
		}
		else
		{
			b[i]=a[j];
			j++;
		}	
	}
	for(i=0;i<n;i++)
		printf("final array:%d\n",b[i]);
	return 0;
}

