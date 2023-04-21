#include<stdio.h>

int fun(int a,int b)
{
	if(b==0)
		return 1;
	if(b %2 == 0)
		return (a*a,b/2);
	return fun(a*a,b/2)*a;
}
int main()
{
	printf("%d",fun(4,3));
	return 0;
}
