#include<stdio.h>
int main()
{
	int a[6]={0,4,10,3,5,1};
	int l[6],i;
	int j=0,p,q,n=5,k,kp,flag=1;

	l[0]=5;
	for(i=n-1;i>0;--i)
	{
		printf("\nfor%d\n",i);
		flag=1;
			p = l[0];
			q = 0;
			k=a[i];
		while(flag)
		{	
			kp=a[p];
			if(k<=kp)
			{
				printf("First_if\n");
				l[q]=i;
				l[i]=p;
				flag=0;
			}
			else
			{
				printf("Second_if\n");	
				q=p;
				p=l[q];
				if(p==0)
				{
					printf("Sec_if\n");		
					l[q]=i;
					l[i]=p;
					flag=0;
				}
			}	
		}
	for(j=0;j<=n;j++)
		printf("befre:%d\t",l[j]);
	}	
	for(i=0;i<=n;i++)
		printf("\n%d",l[i]);
	printf("\n");

	int tt=0;
	for(i=0;i<n;i++)
	{	
		int t =l[tt];
		tt = t;
		printf("\n%d",a[t]);
	}
	printf("\n");	
}
