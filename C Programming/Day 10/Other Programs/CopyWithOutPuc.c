#include<stdio.h>
int main()
{
	char *a="house no : 123@ cbe";
	int n = 19;
	printf("String:%s\n",a);	printf("N:%d\n",n);
	int i,j=0,k=0,x,flag;
	char b[19];
	char c[19];	
	for(i=0;i<n;i++)
	{
		if((a[i]>=48 && a[i]<=57 ) || (a[i]>=98	 && a[i]<=122 ) )
		{
			b[i] = 'X';	
			c[k] = a[i];
			k++;
		}
		else
		{
			b[i] = a[i];
		}
		j++;				
	}
	b[i]='\0';	

	printf("String2:%s\n",b);
	printf("String3:%s\n",c);
	printf("K:%d\n",k);
	j=1;
	for(i=0;i<n;i++)
	{
		if(b[i]=='X')
		{
			b[i] = c[k-j];
			j++;	
		}
			
	}
	b[i]='\0';	
	printf("String2:%s\n",b);
	return 0;
}
