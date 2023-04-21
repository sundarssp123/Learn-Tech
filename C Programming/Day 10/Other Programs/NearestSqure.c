#include<stdio.h>
int main()
{
	int a[]={45,23,11,57,68,32};
	int i,j,k,n=6,pos=3,max,min,t;
	int val=a[pos];

	for(i=1;;i++)
	{
		if(i*i > val)
		{
			max=i*i;
			break;
		}
		min=i*i;	
	}
	if( (max-val) > (val-min) )
		a[pos]=min;
	else
		a[pos]=max;

	t=a[pos];
	a[pos]=a[0];
	a[0]=t;
	for(i=0,j= 1; (i<n) && ( (j<n-i-1) || (j=1,++i)) ;j++)
			if(a[j] > a[j+1] )
				k =a[j+1],a[j+1]=a[j] , a[j] = k;
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
