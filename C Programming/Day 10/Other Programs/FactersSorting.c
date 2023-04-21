#include<stdio.h>
int main()
{
	int a[10]={8,17,15,1};
	int b[10]={};
	int i,j,temp,temp1,n=4;
	for(i=0;i<4;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
				b[i]++;
		}	
	}
	printf("Before\n");
	for(i=0;i<4;i++)
		printf("%d\t",a[i]);

	printf("\n");
	for(i=0;i<4;i++)
		printf("%d\t",b[i]);
	printf("\n");

	for(i=0;i<4;i++)
	{
		for(j=0;j< n-i-1;j++)
		{
			if(b[j+1] < b[j])
			{
				temp = b[j+1];
				b[j+1] = b[j];
				b[j] = temp;	

				a[j] = a[j] + a[j+1];				//Without temp
				a[j+1] = a[j] - a[j+1];
				a[j] = a[j] - a[j+1];	
			}
		}
	}		
	printf("After\n");
	for(i=0;i<4;i++)
		printf("%d\t",a[i]);	
	printf("\n");
	for(i=0;i<4;i++)
		printf("%d\t",b[i]);

	return 0;
}
