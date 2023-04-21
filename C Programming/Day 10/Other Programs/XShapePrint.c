#include<stdio.h>

int main()
{
	int a[]={1,2,3,4,5};
	int i,j;
	int n =sizeof(a)/sizeof(a[0]);
	printf("N:%d\n",n);	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		{	
			printf(" ");	
		}
		printf("%d ",a[i-1]);	
		for(j=1;j<=3-i*i;j++)
		{	
			printf(" ");	
		}
		if(i!=3)
		printf("%d \n",a[5-i]);	
	}
	printf("\n");

	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3-i;j++)
		{	
			printf(" ");	
		}
		printf("%d ",a[2-i]);	

		for(j=1;j<=i*i-2;j++)
		{	
			printf(" ");	
		}
		printf("%d \n",a[2+i]);	
	}
	printf("\n");

	return 0;
}

