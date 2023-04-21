#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *a="b3c6d15";
	char c[10];
	int	flag=0,i,j,n,num,l,k;
	for(i=0;i<strlen(a);i++)
	{	
		k=i;		
		l=num=flag=0;
		while(a[k]>= 48 && a[k] <= 57)
		{	
			c[l++] = a[k];
			num=atoi(c);
			k++;
			flag++;
		}
		for(j=0;j<num;j++)
		{
			printf("%c\t",a[i-1]);
		}
		if(flag>1)
			i++;
	}	
}
