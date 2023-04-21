#include<stdio.h>
int main()
{
	char a[10]={'a','b','c'};
	int c=0,i,n,s=2,m;
	for(i=0;i<3;i++)
	{	
		printf("%c\n",a[i]);
		c++;
	}
	for(i=0;i<3;i++)
	{	
		n=i+1;
		if(n>=3)
			n=s-i;
		printf("%c%c\n",a[i],a[n]);
		printf("%c%c\n",a[n],a[i]);
		c++,c++;
	}
	for(i=0;i<3;i++)
	{	
		n=i+1;
		m=i+2;
		if(n>2)
			n=n-s-1;
		if(m>2)
			m=m-s-1;
		printf("%c%c%c\n",a[i],a[n],a[m]);
		printf("%c%c%c\n",a[i],a[m],a[n]);
		c++,c++;
	}
	printf("Count:%d\n",c);
	return 0;
}

