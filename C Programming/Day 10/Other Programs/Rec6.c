#include<stdio.h>

int fun(int n)
{
	printf("n:%d\n",n);
	if(n>100)
		return n-10;
	return fun(fun(n+11));	
}

int main()
{
	printf("%d",fun(99));
	return 0;
}
