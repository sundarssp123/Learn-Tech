#include<stdio.h>
int main()
{
	int a[] ={2,3,2,6,1,6,2};
	int n=sizeof(a)/sizeof(a[0]);
	int i,j;
	int b[10]={};

	for(i=0;i<n;i++)
	{
		b[a[i]]++;
	}

	for(i=0;i<10;i++)
	{
		if(b[i])
		{
			printf("%d\t:%d\n",i,b[i]);
		}
	}	
	return 0;
}
