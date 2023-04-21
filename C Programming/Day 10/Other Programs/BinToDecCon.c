#include<stdio.h>
int main()
{
	int i,k,j,n,base=1,binary=0,r;
	printf("Enter the Binary");
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		binary=binary+r*base;
		base=base*2;
		n=n/10;
	}
	printf("Value:%d\n",binary);
	return 0;
}
