#include<stdio.h>
int PushToEnd(int a[],int n)
{
	int i,iCount;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
			a[iCount++] = a[i];
	}
	while(iCount<n)
		a[iCount++]=0;

	return 0;
}
int main()
{
	int a[7]={1,0,3,4,0,0,8},i;
	int n = sizeof(a)/sizeof(a[0]);
	PushToEnd(a,n);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}
