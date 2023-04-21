#include<stdio.h>
int main()
{
	int c=1,t,bi,s;
	int a[]={1,7,4,6,3,10,2,8,9},i,j,k,n=9,l,b[9]={};

	for(i=0,j= 0; (i<n) && ( (j<n-i-1) || (j=0,++i)) ;j++)
			if(a[j] > a[j+1] )
				k =a[j+1],a[j+1]=a[j] , a[j] = k;
	for(i=0,j=0;i<n;i++)
	{
		while(a[i+j]+1==a[i+j+1])
		{
				b[i] = c++;
				j++;	
		}
		j=0,c=1;
	}
	bi=b[0];
	for(i=0;i<n;i++)
	{
		if(b[i]>=bi)
		{
			bi=b[i];
			t=i;
		}
	}
	for(i=0;i<=bi;i++)
		printf("%d\n",a[t++]);
	return 0;
}
