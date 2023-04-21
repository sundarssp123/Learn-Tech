#include<stdio.h>
int PushToEnd(int a[],int n)
{
	int i,iCount;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
			a[iCount++] = a[i];
	}
	return iCount;
}
int main()
{
	int a[]={1,0,3,4,0,0,8,343,4,3,43,4,3,32,0,0,0,0,1,0},i;
	int n = sizeof(a)/sizeof(a[0]);
	int Count = PushToEnd(a,n);
	for(i=0;i<Count;i++)
		printf("%d\t",a[i]);
	return 0;
}
