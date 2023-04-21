#include<stdio.h>

int PushToEnd(int a[],int n)
{
	int i,iCount=0;
	for(i=0;i<=n;i++)
	{
		
		if(a[i]!=0)
		{
			a[iCount++] = a[i];
		}
	}
	for(i=0;i<iCount;i++)
		printf("%d\t",a[i]);
	return 0;
}
int main()
{
	int a[]={2,4,5,6,7,9,10,13};
	int b[]={2,3,4,5,6,7,8,9,11,15};
	int c[15]={},i=0,k=0,j=0,l,pos;
	int n1=sizeof(a)/sizeof(a[0]);
	int n2=sizeof(b)/sizeof(b[0]);
	pos=0;
	for(i=0;i<n1;i++)
	{
		pos=a[i];
		c[pos]=a[i];
	}	
	 pos=0;
	for(i=0;i<n2;i++)
	{	
		pos=b[i];	
		c[pos]=b[i];
	}
	PushToEnd(c,15);
	return 0;
}
