#include<stdio.h>
int main()
{
	int a[]={0,3,5,6,-20},i,j,k,n=5,l;

	for(i=0,j= 0; (i<n) && ( (j<n-i-1) || (j=0,++i)) ;j++)
			if(a[j] > a[j+1] )
				k =a[j+1],a[j+1]=a[j] , a[j] = k;

	( (a[n-1]*a[n-2]*a[n-3]) > (a[n-1]*a[n-2]*a[0])) ?	printf("Ans:%d",a[n-1]*a[n-2]*a[n-3]) :	printf("Ans:%d",a[n-1]*a[n-2]*a[0]);
}
