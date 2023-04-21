#include<stdio.h>
int main()
{
	char a[]={'P','R','O','G','R','A','M'};
	int n= sizeof(a)/sizeof(a[0]);
	int i,j,k;
	printf("n:%d\n",n);
	int mid = n/2;
	printf("mid:%d\n",mid);
	for(i=0;i<n;i++)
	{
		for(k=i+i;k<n+n;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(j<=mid)
				printf("%c",a[mid+j]);
			else
				printf("%c",a[j-(mid+1)]);
		}
		printf("\n");	
	}	
	return 0;
}



