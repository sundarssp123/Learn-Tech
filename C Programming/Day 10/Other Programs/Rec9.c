#include<stdio.h>

int fun(int n, int *fp)
{
	int t,f;
	if(n <=1)
	{
		*fp =1;
		return 1;
	}
	t = fun(n-1,fp);
	f = t + *fp;
	*fp =t;
	printf("f:%d n:%d\n",f,n);
	return f;
}

int main()
{
	int x=15;
	printf("%d\n",fun(5,&x));
	return 0;
}
