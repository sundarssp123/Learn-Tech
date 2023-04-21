#include<stdio.h>
int main()
{
	int a[5]={1,5,6,3,6}, b[5];
	int i,j,k,n=5,c=0;

	for(i=0,j= 0; (i<n) && ( (j<n-i-1) || (j=0,++i)) ;j++)
			if(a[j] > a[j+1] )
				k =a[j+1],a[j+1]=a[j] , a[j] = k;


	for(i=0,k=0;(i<n && ((b[k++]=a[i]) ? 1 :1 ));i++)
		while(a[i] == a[i+1]&&i++);
	for(i=0;i<k-2;i++)
		printf("%d ",b[i]);
	return 0;
}
