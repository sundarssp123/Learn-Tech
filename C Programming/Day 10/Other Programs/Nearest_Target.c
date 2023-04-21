#include<stdio.h>
int FindPosition(int a[],int b)
{
	int i,n=5;
	for(i=0;i<n;i++)
		if(a[i]	== b)
			return i;
	return -1;
}

int main()
{
	int a[10]={132,332,455,256,219,419,553},b[10],c[10],d[10],i,j,n=5,target =100;	

	for(i=0;i<n;i++)
		b[i] = a[i]+a[i+1]+a[i+2];

	for(i=0;i<n;i++)
		printf("Answer%d : %d\n",i,b[i]);

	for(i=0;i<n;i++)
		if(b[i]>target)
			c[i] = b[i]-target;
		else	
			c[i] = target-b[i];

	for(i=0;i<n;i++)
		d[i]=c[i];

	for(i=0;i<n-1;i++)
		for(j=0;j<n-1;j++)
			if(c[j] > c[j+1])
			{
				int temp = c[j];
				c[j] = c[j+1];
				c[j+1]=temp;	
			}	
	int Final=FindPosition(d,c[0]);
	printf("100 Nearest value is:%d\n",b[Final]);
}
