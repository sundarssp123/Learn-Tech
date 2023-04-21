#include<stdio.h>

int fun(int x,int y)
{
	if(x==0)
		return y;
	else
		return fun(x-1,x+y);
}

int main()
{
	int a=fun(4,3);
	printf("%d\n",a);	
	return 0;
}
